#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int ans = -1; 
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        
        
        if (p != i) {
            if (ans == -1) {
                ans = p;
            } else {
                ans &= p;
            }
        }
    }
    
    cout << ans << "
";
}
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}