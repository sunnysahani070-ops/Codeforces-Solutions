#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
 
    long long min_s = b * k;
    
    long long max_s = b * k + n * (k - 1);
 
    if (s < min_s || s > max_s) {
        cout << -1 << "
";
        return;
    }
 
    vector<long long> a(n, 0);
    
    a[0] = b * k;
    long long remaining_sum = s - b * k;
 
    for (int i = 0; i < n; ++i) {
        long long add = min(remaining_sum, k - 1);
        a[i] += add;
        remaining_sum -= add;
    }
 
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
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