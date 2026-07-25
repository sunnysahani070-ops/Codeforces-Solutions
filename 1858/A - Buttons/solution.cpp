#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (a + (c % 2) > b) {
        cout << "First
";
    } else {
        cout << "Second
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