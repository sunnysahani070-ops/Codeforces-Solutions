#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
 
    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);
    vector<long long> pref_max(n + 1, 0);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
        pref_max[i + 1] = max(pref_max[i], a[i]);
    }
 
    while (q--) {
        long long k;
        cin >> k;
        auto it = upper_bound(pref_max.begin(), pref_max.end(), k);
        int idx = distance(pref_max.begin(), it) - 1;
 
        cout << pref[idx] << (q == 0 ? "" : " ");
    }
    cout << "
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