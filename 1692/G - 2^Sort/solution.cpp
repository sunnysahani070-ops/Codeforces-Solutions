#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    int ans = 0;
    int streak = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] < 2LL * a[i + 1]) {
            streak++;
        } else {
            streak = 0;
        }
        
        if (streak >= k) {
            ans++;
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