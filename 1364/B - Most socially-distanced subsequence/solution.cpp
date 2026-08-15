#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            ans.push_back(p[i]);
        }
        
        else if ((p[i] > p[i-1] && p[i] > p[i+1]) || (p[i] < p[i-1] && p[i] < p[i+1])) {
            ans.push_back(p[i]);
        }
    }
    
    cout << ans.size() << "
";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}