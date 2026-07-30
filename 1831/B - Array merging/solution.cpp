#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    map<int, int> max_a, max_b;
 
    // Find max consecutive run for each element in array a
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) {
            j++;
        }
        int len = j - i;
        max_a[a[i]] = max(max_a[a[i]], len);
        i = j;
    }
 
    // Find max consecutive run for each element in array b
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && b[j] == b[i]) {
            j++;
        }
        int len = j - i;
        max_b[b[i]] = max(max_b[b[i]], len);
        i = j;
    }
 
    int ans = 0;
    // Check all elements present in array a's map
    for (auto& pair : max_a) {
        int val = pair.first;
        int len = pair.second + max_b[val]; // max_b[val] will be 0 if val is not in max_b
        ans = max(ans, len);
    }
 
    // Also check elements that are only in array b's map
    for (auto& pair : max_b) {
        int val = pair.first;
        int len = pair.second + max_a[val]; // max_a[val] will be 0 if val is not in max_a
        ans = max(ans, len);
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