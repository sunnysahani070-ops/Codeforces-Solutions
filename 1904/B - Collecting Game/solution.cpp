#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
 
    // Sort elements in ascending order
    sort(a.begin(), a.end());
 
    // Compute prefix sums
    vector<long long> pref(n);
    pref[0] = a[0].first;
    for (int i = 1; i < n; ++i) {
        pref[i] = pref[i - 1] + a[i].first;
    }
 
    vector<int> ans(n);
    vector<int> reach(n);
 
    for (int i = 0; i < n; ++i) {
        int r = i;
        // Greedily find the furthest index we can reach
        while (r + 1 < n && pref[r] >= a[r + 1].first) {
            r = reach[r + 1]; // Jump to already computed furthest reach
            break;
        }
        // Alternatively, use a standard pointer advancement:
        // while (r + 1 < n && pref[r] >= a[r + 1].first) {
        //     r++;
        // }
        // reach[i] = r;
    }
 
    // Better implementation of reach computation using standard linear scan:
    int r = 0;
    for (int i = 0; i < n; ++i) {
        r = max(r, i);
        while (r + 1 < n && pref[r] >= a[r + 1].first) {
            r++;
        }
        reach[i] = r;
    }
 
    for (int i = 0; i < n; ++i) {
        ans[a[i].second] = reach[i];
    }
 
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
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