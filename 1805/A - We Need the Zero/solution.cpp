#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_xor = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_xor ^= a[i];
    }
    
    if (n % 2 == 1) {
        cout << total_xor << "
";
    } else {
        if (total_xor == 0) {
            cout << 0 << "
";
        } else {
            cout << -1 << "
";
        }
    }
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