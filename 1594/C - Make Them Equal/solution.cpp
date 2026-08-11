#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
 
    
    bool all_c = true;
    for (char ch : s) {
        if (ch != c) {
            all_c = false;
            break;
        }
    }
 
    if (all_c) {
        cout << 0 << "
";
        return;
    }
 
    
    for (int x = 1; x <= n; ++x) {
        bool ok = true;
        for (int i = x; i <= n; i += x) {
            if (s[i - 1] != c) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << "
";
            cout << x << "
";
            return;
        }
    }
 
    
    cout << 2 << "
";
    cout << n - 1 << " " << n << "
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