#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // Set to store unique alternating prefix sums
    set<long long> seen;
    
    // Base case: A prefix sum of 0 represents a valid subarray starting from index 0
    seen.insert(0);
    
    long long current_prefix_sum = 0;
    bool found = false;
 
    for (int i = 0; i < n; i++) {
        // Add elements at even indices and subtract at odd indices
        if (i % 2 == 0) {
            current_prefix_sum += a[i];
        } else {
            current_prefix_sum -= a[i];
        }
 
        // If the prefix sum has been seen before, a zero-sum subarray exists
        if (seen.count(current_prefix_sum)) {
            found = true;
            break;
        }
 
        seen.insert(current_prefix_sum);
    }
 
    if (found) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}