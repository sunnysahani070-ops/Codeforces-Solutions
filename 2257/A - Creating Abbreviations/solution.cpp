#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<bool> valid_first_letter(26, false);
    
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        valid_first_letter[toupper(w[0]) - 'A'] = true;
    }
    
    bool possible = true;
    
    for (int i = 0; i < m; i++) {
        string a;
        cin >> a;
        for (char c : a) {
            if (!valid_first_letter[c - 'A']) {
                possible = false;
            }
        }
    }
    
    if (possible) {
        cout << "YES
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
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}