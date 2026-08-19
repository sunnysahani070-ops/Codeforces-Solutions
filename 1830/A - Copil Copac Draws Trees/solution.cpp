#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
 
    vector<int> dp(n + 1, 0);
    vector<int> id(n + 1, 0);
    dp[1] = 1;
    id[1] = 0;
 
    int ans = 1;
    queue<int> q;
    q.push(1);
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        for (auto edge : adj[u]) {
            int v = edge.first;
            int i = edge.second;
 
            if (dp[v] == 0) {
                if (i > id[u]) {
                    dp[v] = dp[u];
                } else {
                    dp[v] = dp[u] + 1;
                }
                id[v] = i;
                ans = max(ans, dp[v]);
                q.push(v);
            }
        }
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