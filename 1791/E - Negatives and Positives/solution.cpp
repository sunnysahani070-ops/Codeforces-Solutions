#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long total_sum = 0;
    int neg_count = 0;
    long long min_abs = 2e9 + 7;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0) {
            neg_count++;
        }
        long long abs_val = abs(a[i]);
        total_sum += abs_val;
        min_abs = min(min_abs, abs_val);
    }
    if (neg_count % 2 != 0) {
        total_sum -= 2 * min_abs;
    }
 
    cout << total_sum << "
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