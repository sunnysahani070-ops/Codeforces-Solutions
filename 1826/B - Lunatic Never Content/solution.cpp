#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int g = 0;
    // Find the GCD of absolute differences of symmetric pairs
    for (int i = 0; i < n / 2; i++) {
        int diff = abs(a[i] - a[n - 1 - i]);
        g = std::gcd(g, diff);
    }
    
    cout << g << "
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