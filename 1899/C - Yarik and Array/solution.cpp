#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int max_sum = a[0];
    int current_sum = a[0];
 
    for (int i = 1; i < n; i++) {
        // Check if adjacent elements have alternating parity
        if (abs(a[i] % 2) != abs(a[i - 1] % 2)) {
            // Standard Kadane's logic: extend or start new subarray
            current_sum = max(a[i], current_sum + a[i]);
        } else {
            // Parities are the same, must start a new subarray
            current_sum = a[i];
        }
 
        max_sum = max(max_sum, current_sum);
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