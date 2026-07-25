#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int x, k;
    cin >> x >> k;
    
    
    if (x % k != 0) {
        cout << 1 << "
";
        cout << x << "
";
    } 
    
    else {
        cout << 2 << "
";
        cout << 1 << " " << x - 1 << "
";
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