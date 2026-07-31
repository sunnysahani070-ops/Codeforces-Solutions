#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    if (k > n) {
        cout << -1 << "
";
        return;
    }
 
    
    int current_w_count = 0;
    for (int idx = 0; idx < k; idx++) {
        if (s[idx] == 'W') {
            current_w_count++;
        }
    }
 
    int mn = current_w_count;
 
   
    for (int j = k; j < n; j++) {
        if (s[j - k] == 'W') {
            current_w_count--; 
        }
        if (s[j] == 'W') {
            current_w_count++; 
        }
        mn = min(mn, current_w_count);
    }
 
    cout << mn << "
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