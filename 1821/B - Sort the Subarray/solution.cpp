#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    vector<int> a_prime(n);
    for (int i = 0; i < n; ++i) {
        cin >> a_prime[i];
    }
 
    // Step 1: Find the first and last indices where a and a' differ
    int l = -1, r = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != a_prime[i]) {
            if (l == -1) l = i;
            r = i;
        }
    }
 
    // Step 2: Expand l to the left as far as a' remains non-decreasing
    while (l > 0 && a_prime[l - 1] <= a_prime[l]) {
        l--;
    }
 
    // Step 3: Expand r to the right as far as a' remains non-decreasing
    while (r < n - 1 && a_prime[r] <= a_prime[r + 1]) {
        r++;
    }
 
    // Convert from 0-based indexing to 1-based indexing for output
    cout << l + 1 << " " << r + 1 << "
";
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