#include <iostream>
#include <vector>
 
using namespace std;
 
const int MOD = 1000000007;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));
    for (int j = 1; j <= n; ++j) {
        dp[1][j] = 1;
    }
    for (int i = 1; i < k; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (dp[i][j] == 0) continue;
            for (int m = j; m <= n; m += j) {
                dp[i + 1][m] = (dp[i + 1][m] + dp[i][j]) % MOD;
            }
        }
    }
    long long ans = 0;
    for (int j = 1; j <= n; ++j) {
        ans = (ans + dp[k][j]) % MOD;
    }
 
    cout << ans << "
";
 
    return 0;
}