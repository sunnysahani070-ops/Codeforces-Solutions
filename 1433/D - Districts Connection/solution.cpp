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
 
    int idx2 = -1;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            idx2 = i;
            break;
        }
    }
 
    if (idx2 == -1) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            cout << 1 << " " << i + 1 << "
";
        } else {
            cout << idx2 + 1 << " " << i + 1 << "
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