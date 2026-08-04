#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long c;
    cin >> n >> c;
 
    vector<long long> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
 
    // Binary search range for border width w
    long long low = 1, high = 1e9;
    long long ans = -1;
 
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long total_area = 0;
 
        // Calculate total cardboard area for w = mid
        for (int i = 0; i < n; i++) {
            long long side = s[i] + 2 * mid;
            total_area += side * side;
 
            // Prevent integer overflow if total_area exceeds c
            if (total_area > c) {
                break;
            }
        }
 
        if (total_area == c) {
            ans = mid;
            break;
        } else if (total_area < c) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
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