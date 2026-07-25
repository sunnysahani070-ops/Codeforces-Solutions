#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int max_zeros = 0;
    int current_zeros = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            current_zeros++;
            max_zeros = max(max_zeros, current_zeros);
        } else {
            current_zeros = 0;
        }
    }
    cout << max_zeros << "
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