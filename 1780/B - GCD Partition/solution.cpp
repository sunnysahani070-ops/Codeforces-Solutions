#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long total_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    long long max_gcd = 1;
    long long prefix_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        prefix_sum += a[i];
        long long suffix_sum = total_sum - prefix_sum;
        max_gcd = max(max_gcd, std::gcd(prefix_sum, suffix_sum));
    }
    
    cout << max_gcd << "
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