#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
 
    long long max_exp = 0;
    long long current_sum_a = 0;
    long long max_b = 0;
 
 
    int limit = min(n, k);
 
    for (int i = 0; i < limit; ++i) {
        
        current_sum_a += a[i];
        max_b = max(max_b, b[i]);
        long long remaining_steps = k - (i + 1);
        long long total_exp = current_sum_a + remaining_steps * max_b;
 
        max_exp = max(max_exp, total_exp);
    }
 
    cout << max_exp << "
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