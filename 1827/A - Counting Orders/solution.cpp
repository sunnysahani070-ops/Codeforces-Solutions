#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    long long MOD = 1e9 + 7;
    long long ans = 1;
 
    for (int i = n - 1; i >= 0; --i) {
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        long long count = a.end() - it;
 
        long long used = (n - 1) - i;
 
        long long available = count - used;
 
        if (available <= 0) {
            ans = 0;
            break;
        }
 
        ans = (ans * available) % MOD;
    }
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