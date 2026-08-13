#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    long long x, y;
    cin >> n >> x >> y;
 
    vector<long long> a(n);
    map<pair<long long, long long>, long long> freq;
    long long ans = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        long long rx = a[i] % x;
        long long ry = a[i] % y;
 
        long long target_rx = (x - rx) % x;
        long long target_ry = ry;
 
        if (freq.count({target_rx, target_ry})) {
            ans += freq[{target_rx, target_ry}];
        }
 
        freq[{rx, ry}]++;
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