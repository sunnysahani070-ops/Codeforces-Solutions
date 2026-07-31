#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int k = 1;
    while (k * 2 < n) {
        k *= 2;
    }
 
    for (int i = n - 1; i >= k; i--) {
        cout << i << " ";
    }
 
    cout << 0 << " ";
 
    for (int i = 1; i < k; i++) {
        cout << i << " ";
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