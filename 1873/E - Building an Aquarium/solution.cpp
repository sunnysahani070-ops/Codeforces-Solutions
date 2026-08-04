#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool check(long long h, const vector<long long>& a, long long x) {
    long long water = 0;
    for (long long height : a) {
        if (height < h) {
            water += (h - height);
        }
    }
    return water <= x;
}
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long low = 1, high = 2e9 + 7;
    long long ans = 1;
 
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, a, x)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
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