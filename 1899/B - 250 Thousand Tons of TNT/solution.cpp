#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    
    long long max_diff = 0;
    
    // Check all divisors of n
    for (int k = 1; k <= n; k++) {
        if (n % k != 0) continue;
        
        long long min_sum = -1, max_sum = -1;
        
        // Partition the array into blocks of size k
        for (int i = 0; i < n; i += k) {
            long long block_sum = pref[i + k] - pref[i];
            if (min_sum == -1) {
                min_sum = block_sum;
                max_sum = block_sum;
            } else {
                min_sum = min(min_sum, block_sum);
                max_sum = max(max_sum, block_sum);
            }
        }
        
        max_diff = max(max_diff, max_sum - min_sum);
    }
    
    cout << max_diff << "
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