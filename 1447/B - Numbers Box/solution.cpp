#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    int sum = 0;
    int min_val = 1e9;
    int neg_count = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int val;
            cin >> val;
            
            if (val < 0) {
                neg_count++;
            }
            
            sum += abs(val);
            min_val = min(min_val, abs(val));
        }
    }
    if (neg_count % 2 == 0) {
        cout << sum << "
";
    } else {
        cout << sum - 2 * min_val << "
";
    }
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