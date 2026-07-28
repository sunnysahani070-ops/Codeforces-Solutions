#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    for (int x = 1; x < n - 1; x++) {
        if (p[x - 1] < p[x] && p[x] > p[x + 1]) {
            cout << "YES
";
            cout << x << " " << x + 1 << " " << x + 2 << "
";
            return;
        }
    }
 
    cout << "NO
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