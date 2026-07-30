#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int smallest_factor = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            smallest_factor = i;
            break;
        }
    }
    int a = n / smallest_factor;
    int b = n - a;
    
    cout << a << " " << b << "
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