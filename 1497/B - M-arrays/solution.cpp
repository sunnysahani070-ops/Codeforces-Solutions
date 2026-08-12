#include <iostream>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    long long m;
    cin >> n >> m;
 
    map<long long, int> cnt;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        cnt[a % m]++;
    }
 
    int ans = 0;
 
    
    if (cnt[0] > 0) {
        ans++;
    }
 
    
    if (m % 2 == 0 && cnt[m / 2] > 0) {
        ans++;
    }
 
    
    for (int r = 1; r < (m + 1) / 2; r++) {
        int c1 = cnt[r];
        int c2 = cnt[m - r];
 
        if (c1 == 0 && c2 == 0) {
            continue;
        }
 
        if (abs(c1 - c2) <= 1) {
            
            ans++;
        } else {
            ans += 1 + (abs(c1 - c2) - 1);
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