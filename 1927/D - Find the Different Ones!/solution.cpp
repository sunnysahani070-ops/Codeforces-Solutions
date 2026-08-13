#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
 
    vector<int> next_diff(n + 1, n + 1);
    for (int i = n - 1; i >= 1; --i) {
        if (a[i] != a[i + 1]) {
            next_diff[i] = i + 1;
        } else {
            next_diff[i] = next_diff[i + 1];
        }
    }
 
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (next_diff[l] <= r) {
            cout << l << " " << next_diff[l] << "
";
        } else {
            cout << "-1 -1
";
        }
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