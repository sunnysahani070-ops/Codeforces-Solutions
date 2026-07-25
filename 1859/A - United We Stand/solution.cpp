#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
 
    vector<int> b, c;
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            c.push_back(a[i]);
        } else {
            b.push_back(a[i]);
        }
    }
 
    
    if (b.empty()) {
        cout << -1 << "
";
    } else {
        cout << b.size() << " " << c.size() << "
";
        for (int x : b) {
            cout << x << " ";
        }
        cout << "
";
        for (int x : c) {
            cout << x << " ";
        }
        cout << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}