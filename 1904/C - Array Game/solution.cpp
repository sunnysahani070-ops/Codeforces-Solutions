#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    if (k >= 3) {
        cout << 0 << "
";
        return;
    }
 
    sort(a.begin(), a.end());
 
    long long min_val = a[0]; 
 
    for (int i = 1; i < n; ++i) {
        min_val = min(min_val, a[i] - a[i - 1]);
    }
 
    if (k == 1) {
        cout << min_val << "
";
        return;
    }
 
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long d = a[j] - a[i];
            
            min_val = min(min_val, d);
            
            auto it = lower_bound(a.begin(), a.end(), d);
            
            if (it != a.end()) {
                min_val = min(min_val, *it - d);
            }
            if (it != a.begin()) {
                min_val = min(min_val, d - *(it - 1));
            }
        }
    }
 
    cout << min_val << "
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