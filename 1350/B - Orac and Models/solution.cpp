#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> s(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
 
    vector<int> dp(n + 1, 1);
    int max_models = 1;
 
    for (int i = 1; i <= n; i++) {
        for (int j = i * 2; j <= n; j += i) {
            if (s[i] < s[j]) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
        max_models = max(max_models, dp[i]);
    }
 
    cout << max_models << "
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