#include <iostream>
 
using namespace std;
 
const long long MOD = 1000000007;
 
void solve() {
    long long n;
    cin >> n;
    
    long long ans = n % MOD;
    ans = (ans * ((n + 1) % MOD)) % MOD;
    ans = (ans * ((4 * n - 1) % MOD)) % MOD;
    
    long long inv6 = 166666668;
    ans = (ans * inv6) % MOD;
    
    ans = (ans * 2022) % MOD;
    
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