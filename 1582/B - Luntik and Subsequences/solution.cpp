#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    long long count1 = 0, count0 = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x == 1) count1++;
        else if (x == 0) count0++;
    }
    
    long long ans = count1 * (1LL << count0);
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}