#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<int> count(31, 0);
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        for (int j = 0; j <= 30; ++j) {
            if ((a >> j) & 1) {
                count[j]++;
            }
        }
    }
    
    long long ans = 0;
    for (int j = 30; j >= 0; --j) {
        int needed = n - count[j];
        if (k >= needed) {
            k -= needed;
            ans |= (1LL << j);
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