#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
long long dist(pair<long long, long long>& p1, pair<long long, long long>& p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}
 
void solve() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;
 
    a--; 
    b--;
 
    vector<pair<long long, long long>> cities(n);
    for (int i = 0; i < n; i++) {
        cin >> cities[i].first >> cities[i].second;
    }
 
    long long ans = dist(cities[a], cities[b]);
 
    if (k > 0) {
        long long min_dist_a = 1e18; 
        long long min_dist_b = 1e18; 
 
        for (int i = 0; i < k; i++) {
            min_dist_a = min(min_dist_a, dist(cities[a], cities[i]));
            min_dist_b = min(min_dist_b, dist(cities[b], cities[i]));
        }
 
        ans = min(ans, min_dist_a + min_dist_b);
    }
 
    cout << ans << "
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