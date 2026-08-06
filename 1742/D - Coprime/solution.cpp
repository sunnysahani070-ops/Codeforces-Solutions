#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> last_idx(1001, 0);
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        last_idx[x] = i;
    }
    
    int max_sum = -1;
    for (int i = 1; i <= 1000; i++) {
        if (last_idx[i] == 0) continue;
        for (int j = i; j <= 1000; j++) {
            if (last_idx[j] == 0) continue;
            if (std::gcd(i, j) == 1) {
                max_sum = max(max_sum, last_idx[i] + last_idx[j]);
            }
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