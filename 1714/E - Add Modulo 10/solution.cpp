#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool has_zero = false;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        while (a[i] % 10 != 2 && a[i] % 10 != 0) {
            a[i] += a[i] % 10;
        }
        
        if (a[i] % 10 == 0) {
            has_zero = true;
        }
    }
    
    if (has_zero) {
        
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                cout << "NO
";
                return;
            }
        }
        cout << "YES
";
    } else {
        for (int i = 1; i < n; i++) {
            if (a[i] % 20 != a[0] % 20) {
                cout << "NO
";
                return;
            }
        }
        cout << "YES
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