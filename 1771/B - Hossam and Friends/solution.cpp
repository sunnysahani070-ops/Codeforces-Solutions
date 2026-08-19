#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> max_left(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v);
        max_left[v] = max(max_left[v], u);
    }
    
    long long ans = 0;
    int current_max = 0;
    
    for (int i = 1; i <= n; ++i) {
        current_max = max(current_max, max_left[i]);
        ans += (i - current_max);
    }
    
    cout << ans << "
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