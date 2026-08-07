#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int target = a[n - 1];
    
    int c = 0;
    int ops = 0;
    int i = n - 1;
    
    while (i >= 0) {
        if (a[i] == target) {
            c++;
            i--;
        } else {
            ops++;
            i -= c;
            c *= 2;
        }
    }
    cout << ops << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}