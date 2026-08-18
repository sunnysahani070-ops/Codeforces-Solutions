#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool check(int k, int n, const vector<pair<int, int>>& segments) {
    int L = 0, R = 0;
    for (int i = 0; i < n; ++i) {
        L = max(0, L - k);
        R = R + k;
        L = max(L, segments[i].first);
        R = min(R, segments[i].second);
        if (L > R) {
            return false;
        }
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; ++i) {
        cin >> segments[i].first >> segments[i].second;
    }
 
    int left = 0, right = 1e9, ans = 1e9;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (check(mid, n, segments)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
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