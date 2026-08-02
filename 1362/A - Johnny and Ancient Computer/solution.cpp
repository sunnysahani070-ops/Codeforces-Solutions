#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    if (b % a != 0) {
        cout << -1 << "
";
        return;
    }
    long long k = b / a;
    if ((k & (k - 1)) != 0) {
        cout << -1 << "
";
        return;
    }
    int shifts = 0;
    while (k > 1) {
        k >>= 1; 
        shifts++;
    }
 
    
    int ans = 0;
    ans += shifts / 3; 
    shifts %= 3;
    
    ans += shifts / 2; 
    shifts %= 2;
    
    ans += shifts;     
 
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