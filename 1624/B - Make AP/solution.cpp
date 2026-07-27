#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    
    long long target_a = 2 * b - c;
    if (target_a > 0 && target_a % a == 0) {
        cout << "YES
";
        return;
    }
 
    
    if ((a + c) % 2 == 0) {
        long long target_b = (a + c) / 2;
        if (target_b > 0 && target_b % b == 0) {
            cout << "YES
";
            return;
        }
    }
 
    
    long long target_c = 2 * b - a;
    if (target_c > 0 && target_c % c == 0) {
        cout << "YES
";
        return;
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