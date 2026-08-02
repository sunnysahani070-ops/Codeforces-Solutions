#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    long long ans = 0;
    vector<bool> seen(26, false);
 
    for (int i = 0; i < n; ++i) {
        if (!seen[s[i] - 'a']) {
            seen[s[i] - 'a'] = true;
            
            ans += (n-i);
        }
    }
 
    cout << ans << "
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