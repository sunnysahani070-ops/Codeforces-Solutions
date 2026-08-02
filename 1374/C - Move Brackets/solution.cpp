#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int cnt1 = 0;
    int cnt2 = 0;
    int ops = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            cnt1++;
        }
        if (s[i] == ')') {
            cnt2++;
        }
        if (cnt2 > cnt1) {
            ops++;
            cnt2 = cnt1;
        }
    }
    
    cout << ops << "
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