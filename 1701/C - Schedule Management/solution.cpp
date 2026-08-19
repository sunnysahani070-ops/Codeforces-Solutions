#include <bits/stdc++.h>
using namespace std;
 
bool check(long long t, int n, const vector<int>& count) {
    long long extra = 0;
    long long needed = 0;
    for (int i = 1; i <= n; i++) {
        if (count[i] <= t) {
            extra += (t - count[i]) / 2;
        } else {
            needed += (count[i] - t);
        }
    }
    return extra >= needed;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> count(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
 
    long long low = 1, high = 2LL * m;
    long long ans = high;
 
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, n, count)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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