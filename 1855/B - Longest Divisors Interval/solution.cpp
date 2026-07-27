#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    
    long long ans = 0;
    for (long long i = 1; ; i++) {
        if (n % i != 0) {
            ans = i - 1;
            break;
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