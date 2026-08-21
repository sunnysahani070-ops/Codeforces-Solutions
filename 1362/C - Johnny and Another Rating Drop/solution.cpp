#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long ans = 0;
    
    while (n > 0) {
        ans += n;
        n >>= 1;
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