#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    
    if (b > d || a + (d - b) < c) {
        cout << -1 << "
";
    } else {
        
        long long ops = (d - b) + (a + (d - b) - c);
        cout << ops << "
";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}