#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
 
    int l = 0, r = n - 1;
    long long sum_alice = 0, sum_bob = 0;
    int max_candies = 0;
 
    while (l <= r) {
        if (sum_alice <= sum_bob) {
            sum_alice += w[l];
            l++;
        } else {
            sum_bob += w[r];
            r--;
        }
 
        if (sum_alice == sum_bob) {
            // l represents candies eaten from left, (n - 1 - r) represents candies eaten from right
            max_candies = l + (n - 1 - r);
        }
    }
 
    cout << max_candies << "
";
}
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}