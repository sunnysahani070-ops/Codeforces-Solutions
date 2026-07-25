#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
 
    int ops = 0;
    bool found = false;
 
    
    for (int p = 0; p <= 5; p++) {
        if (x.find(s) != string::npos) {
            found = true;
            break;
        }
        x += x;
        ops++;
    }
 
    if (found) {
        cout << ops << endl;
    } else {
        cout << -1 << endl;
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