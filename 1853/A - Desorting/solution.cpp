#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    
    bool is_sorted = true;
    long long min_diff = 2e9 + 7; 
 
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            is_sorted = false;
            break;
        }
        min_diff = min(min_diff, a[i + 1] - a[i]);
    }
 
    if (!is_sorted) {
        cout << 0 << "
";
    } else {
        cout << (min_diff / 2) + 1 << "
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