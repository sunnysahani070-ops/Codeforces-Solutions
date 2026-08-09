#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<long long>> c(m, vector<long long>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c[j][i];
        }
    }
 
    long long total_winnings = 0;
 
    for (int j = 0; j < m; ++j) {
        sort(c[j].begin(), c[j].end());
        for (int i = 0; i < n; ++i) {
            total_winnings += c[j][i] * (2LL * i - n + 1);
        }
    }
 
    cout << total_winnings << "
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