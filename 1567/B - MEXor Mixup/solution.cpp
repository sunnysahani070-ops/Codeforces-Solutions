#include <iostream>
 
using namespace std;
 
int compute_prefix_xor(int n) {
    int rem = n % 4;
    if (rem == 0) return n;
    if (rem == 1) return 1;
    if (rem == 2) return n + 1;
    return 0;
}
 
void solve() {
    int a, b;
    cin >> a >> b;
    
    int current_xor = compute_prefix_xor(a - 1);
    
    if (current_xor == b) {
        cout << a << "
";
    } else if ((current_xor ^ b) != a) {
        cout << a + 1 << "
";
    } else {
        cout << a + 2 << "
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