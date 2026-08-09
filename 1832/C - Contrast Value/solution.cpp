#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b;
    for (int i = 0; i < n; ++i) {
        if (b.empty() || b.back() != a[i]) {
            b.push_back(a[i]);
        }
    }
 
    if (b.size() == 1) {
        cout << 1 << "
";
        return;
    }
 
    int ans = b.size();
    for (int i = 1; i < (int)b.size() - 1; ++i) {
        if ((b[i - 1] < b[i] && b[i] < b[i + 1]) || (b[i - 1] > b[i] && b[i] > b[i + 1])) {
            ans--;
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