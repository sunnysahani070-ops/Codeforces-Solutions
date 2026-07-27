#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long z, b, n;
    cin >> z >> b >> n;
    
    long long res = b;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        
        res += min(x, z - 1);
    }
    
    cout << res << "
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