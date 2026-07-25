#include <iostream>
 
using namespace std;
 
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
 
    
    if (x != 1) {
        cout << "YES
";
        cout << n << "
";
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << "
";
    } 
    
    else {
        
        if (k == 1) {
            cout << "NO
";
        } 
        
        else if (n % 2 == 0) {
            cout << "YES
";
            cout << n / 2 << "
";
            for (int i = 0; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout << "
";
        } 
        
        else if (k >= 3) {
            cout << "YES
";
            cout << (n - 3) / 2 + 1 << "
";
            cout << 3 << " ";
            for (int i = 0; i < (n - 3) / 2; i++) {
                cout << 2 << " ";
            }
            cout << "
";
        } 
        
        else {
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