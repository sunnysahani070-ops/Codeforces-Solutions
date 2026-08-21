#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> parent_node, sz;
 
int find_set(int v) {
    if (v == parent_node[v])
        return v;
    return parent_node[v] = find_set(parent_node[v]);
}
 
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent_node[b] = a;
        sz[a] += sz[b];
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    parent_node.resize(n + 1);
    sz.assign(n + 1, 1);
    
    for (int i = 1; i <= n; i++) {
        parent_node[i] = i;
    }
 
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        if (k > 0) {
            int first;
            cin >> first;
            for (int j = 1; j < k; j++) {
                int u;
                cin >> u;
                union_sets(first, u);
            }
        }
    }
 
    for (int i = 1; i <= n; i++) {
        cout << sz[find_set(i)] << " ";
    }
    cout << "
";
 
    return 0;
}