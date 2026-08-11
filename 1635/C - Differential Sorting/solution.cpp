#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (a[n - 2] > a[n - 1]) {
        cout << -1 << "
";
        return;
    }
 
    
    if (a[n - 1] >= 0) {
        cout << n - 2 << "
";
        for (int i = 1; i <= n - 2; ++i) {
            cout << i << " " << n - 1 << " " << n << "
";
        }
    } else {
        
        bool is_sorted = true;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                is_sorted = false;
                break;
            }
        }
 
        if (is_sorted) {
            cout << 0 << "
";
        } else {
            cout << -1 << "
";
        }
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}