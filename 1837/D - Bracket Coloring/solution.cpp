#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int bal = 0;
    for (char c : s) {
        if (c == '(') bal++;
        else bal--;
    }
    
    if (bal != 0) {
        cout << -1 << '
';
        return;
    }
 
    vector<int> c(n);
    int cur = 0;
    bool has1 = false, has2 = false;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (cur >= 0) {
                c[i] = 1;
                has1 = true;
            } else {
                c[i] = 2;
                has2 = true;
            }
            cur++;
        } else {
            if (cur > 0) {
                c[i] = 1;
                has1 = true;
            } else {
                c[i] = 2;
                has2 = true;
            }
            cur--;
        }
    }
 
    if (has1 && has2) {
        cout << 2 << '
';
        for (int i = 0; i < n; i++) {
            cout << c[i] << (i == n - 1 ? "" : " ");
        }
        cout << '
';
    } else {
        cout << 1 << '
';
        for (int i = 0; i < n; i++) {
            cout << 1 << (i == n - 1 ? "" : " ");
        }
        cout << '
';
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