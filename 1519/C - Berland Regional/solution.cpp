#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> u(n), s(n);
    for (int i = 0; i < n; ++i) {
        cin >> u[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
 
    vector<vector<long long>> univ(n + 1);
    for (int i = 0; i < n; ++i) {
        univ[u[i]].push_back(s[i]);
    }
 
    vector<long long> ans(n + 1, 0);
 
    for (int i = 1; i <= n; ++i) {
        if (univ[i].empty()) continue;
        
        sort(univ[i].rbegin(), univ[i].rend());
        
        int m = univ[i].size();
        vector<long long> pref(m + 1, 0);
        for (int j = 0; j < m; ++j) {
            pref[j + 1] = pref[j] + univ[i][j];
        }
        
        for (int k = 1; k <= m; ++k) {
            int take = (m / k) * k;
            ans[k] += pref[take];
        }
    }
 
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "
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