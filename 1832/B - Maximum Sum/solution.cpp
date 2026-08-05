#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    long long max_sum = 0;
    for (int i = 0; i <= k; i++) {
        int left_removed = 2 * (k - i);
        int right_removed = i;
        
        if (left_removed <= n && right_removed <= n && (left_removed + right_removed) <= n) {
            long long current_sum = pref[n - right_removed] - pref[left_removed];
            max_sum = max(max_sum, current_sum);
        }
    }
    
    cout << max_sum << "
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