#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int l = 0, r = n - 1;
    while (l < n && a[l] == 0) {
        l++;
    }
   
    while (r >= 0 && a[r] == 0) {
        r--;
    }
    
    if (l > r) {
        cout << 0 << "
";
        return;
    }
    for (int i = l; i <= r; i++) {
        if (a[i] == 0) {
            cout << 2 << "
";
            return;
        }
    }
    cout << 1 << "
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