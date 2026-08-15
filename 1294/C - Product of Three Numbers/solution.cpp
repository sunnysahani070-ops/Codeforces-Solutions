#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    
    long long a = -1, b = -1, c = -1;
    
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            a = i;
            n /= i;
            break;
        }
    }
    
    if (a == -1) {
        cout << "NO
";
        return;
    }
    
    for (long long i = a + 1; i * i <= n; ++i) {
        if (n % i == 0) {
            b = i;
            n /= i;
            break;
        }
    }
    
    if (b == -1) {
        cout << "NO
";
        return;
    }
    
    c = n;
    
    if (c > b) {
        cout << "YES
";
        cout << a << " " << b << " " << c << "
";
    } else {
        cout << "NO
";
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