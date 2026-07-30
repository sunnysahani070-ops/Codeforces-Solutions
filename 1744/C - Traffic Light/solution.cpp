#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    char c;
    cin >> n >> c;
    
    string s;
    cin >> s;
    if (c == 'g') {
        cout << 0 << "
";
        return;
    }
    
    s += s;
    
    int max_wait = 0;
    int last_g = -1;
    
    for (int i = 2 * n - 1; i >= 0; i--) {
        if (s[i] == 'g') {
            last_g = i;
        }
        if (s[i] == c && last_g != -1 && i < n) {
            max_wait = max(max_wait, last_g - i);
        }
    }
    
    cout << max_wait << "
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