#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> x(n), y(n), diff(n);
    for (int i = 0; i < n; ++i) cin >> x[i];
    for (int i = 0; i < n; ++i) cin >> y[i];
    for (int i = 0; i < n; ++i) diff[i] = y[i] - x[i];
    
    sort(diff.begin(), diff.end());
    
    int l = 0, r = n - 1;
    int days = 0;
    
    while (l < r) {
        if (diff[l] + diff[r] >= 0) {
            days++;
            l++;
            r--;
        } else {
            l++;
        }
    }
    
    cout << days << "
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