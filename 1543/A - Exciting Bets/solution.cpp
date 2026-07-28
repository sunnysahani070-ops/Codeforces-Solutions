#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    
    if (a == b) {
        cout << 0 << " " << 0 << "
";
        return;
    }
 
    
    long long max_excitement = abs(a - b);
 
    
    long long remainder = a % max_excitement;
    long long min_moves = min(remainder, max_excitement - remainder);
 
    cout << max_excitement << " " << min_moves << "
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