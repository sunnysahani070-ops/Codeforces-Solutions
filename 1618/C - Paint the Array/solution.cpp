#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll g1 = a[0];
    for (int i = 0; i < n; i += 2) {
        g1 = std::gcd(g1, a[i]);
    }
 
    bool ok1 = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) {
            ok1 = false;
            break;
        }
    }
 
    if (ok1) {
        cout << g1 << "
";
        return;
    }
    ll g2 = a[1];
    for (int i = 1; i < n; i += 2) {
        g2 = std::gcd(g2, a[i]);
    }
 
    bool ok2 = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) {
            ok2 = false;
            break;
        }
    }
 
    if (ok2) {
        cout << g2 << "
";
    } else {
        cout << 0 << "
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