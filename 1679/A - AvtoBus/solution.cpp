#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    
    if (n % 2 != 0 || n < 4) {
        cout << -1 << "
";
        return;
    }
 
    
    long long min_buses = (n + 5) / 6;
 
    
    long long max_buses = n / 4;
 
    cout << min_buses << " " << max_buses << "
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