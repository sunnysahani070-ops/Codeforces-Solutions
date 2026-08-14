#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        k[i]--; 
    }
    
    vector<long long> c(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    
    sort(k.rbegin(), k.rend());
    
    long long total_cost = 0;
    int p = 0;
    
    for (int i = 0; i < n; i++) {
        if (p < m && p < k[i]) {
            total_cost += c[p];
            p++;
        } else {
            total_cost += c[k[i]];
        }
    }
    
    cout << total_cost << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}