#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int a, b, k;
    cin >> a >> b >> k;
 
    vector<int> boys(k);
    vector<long long> deg_a(a + 1, 0);
    for (int i = 0; i < k; ++i) {
        cin >> boys[i];
        deg_a[boys[i]]++;
    }
 
    vector<int> girls(k);
    vector<long long> deg_b(b + 1, 0);
    for (int i = 0; i < k; ++i) {
        cin >> girls[i];
        deg_b[girls[i]]++;
    }
    long long ans = 1LL * k * (k - 1) / 2;
 
    for (int i = 1; i <= a; ++i) {
        if (deg_a[i] > 1) {
            ans -= deg_a[i] * (deg_a[i] - 1) / 2;
        }
    }
 
    for (int i = 1; i <= b; ++i) {
        if (deg_b[i] > 1) {
            ans -= deg_b[i] * (deg_b[i] - 1) / 2;
        }
    }
 
    cout << ans << "
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