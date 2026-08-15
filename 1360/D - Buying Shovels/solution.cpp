#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long ans = n; 
        
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i <= k) {
                    ans = min(ans, n / i);
                }
                if (n / i <= k) {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << "
";
    }
    return 0;
}