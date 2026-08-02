#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
    
    long long sticks_needed = k * y + k - 1;
    long long stick_trades = (sticks_needed + x - 2) / (x - 1);
    
    cout << stick_trades + k << "
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