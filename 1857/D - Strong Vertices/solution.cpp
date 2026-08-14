#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
 
    long long max_c = -3e18;
    vector<long long> c(n);
    for (int i = 0; i < n; ++i) {
        c[i] = a[i] - b[i];
        if (c[i] > max_c) {
            max_c = c[i];
        }
    }
 
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (c[i] == max_c) {
            ans.push_back(i + 1);
        }
    }
 
    cout << ans.size() << "
";
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
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