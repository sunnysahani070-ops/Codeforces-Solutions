#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    long long q;
    cin >> n >> k >> q;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    long long total_ways = 0;
    long long current_len = 0;
 
    for (int i = 0; i < n; ++i) {
        if (a[i] <= q) {
            current_len++;
        } else {
            if (current_len >= k) {
                long long valid_days = current_len - k + 1;
                total_ways += (valid_days * (valid_days + 1)) / 2;
            }
            current_len = 0;
        }
    }
    if (current_len >= k) {
        long long valid_days = current_len - k + 1;
        total_ways += (valid_days * (valid_days + 1)) / 2;
    }
 
    cout << total_ways << "
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