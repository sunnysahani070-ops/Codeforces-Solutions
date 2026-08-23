#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> dp(n + 1, 0);
    
    for (int i = n - 1; i >= 0; --i) {
        dp[i] = dp[i + 1] + 1;
        
        if (i + a[i] + 1 <= n) {
            dp[i] = min(dp[i], dp[i + a[i] + 1]);
        }
    }
    
    cout << dp[0] << "
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