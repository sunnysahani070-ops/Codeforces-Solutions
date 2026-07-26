#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    if (n % 2 == 0) {
        cout << "YES
";
    } else {
        // If n is odd, k must also be odd and n >= k
        if (k % 2 != 0 && n >= k) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
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