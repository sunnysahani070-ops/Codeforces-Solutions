#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long l, r;
    cin >> n >> l >> r;
 
    vector<long long> a(n + 1);
    bool possible = true;
 
    for (int i = 1; i <= n; ++i) {
        long long val = ((l + i - 1) / i) * i;
        if (val > r) {
            possible = false;
            break;
        }
        a[i] = val;
    }
 
    if (!possible) {
        cout << "NO
";
    } else {
        cout << "YES
";
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << (i == n ? "" : " ");
        }
        cout << "
";
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