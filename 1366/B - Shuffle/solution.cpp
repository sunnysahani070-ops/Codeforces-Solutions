#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, x, m;
    cin >> n >> x >> m;
    
    int L = x, R = x;
    
    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        
        if (max(L, l) <= min(R, r)) {
            L = min(L, l);
            R = max(R, r);
        }
    }
    
    cout << R - L + 1 << "
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