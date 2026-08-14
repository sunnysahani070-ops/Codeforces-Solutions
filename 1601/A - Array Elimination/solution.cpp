#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> bit_counts(30, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 30; j++) {
            if ((a[i] >> j) & 1) {
                bit_counts[j]++;
            }
        }
    }
    
    int total_gcd = 0;
    for (int j = 0; j < 30; j++) {
        total_gcd = std::gcd(total_gcd, bit_counts[j]);
    }
    
    for (int k = 1; k <= n; k++) {
        if (total_gcd % k == 0) {
            cout << k << " ";
        }
    }
    cout << "
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