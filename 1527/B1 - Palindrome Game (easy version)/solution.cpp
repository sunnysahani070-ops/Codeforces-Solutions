#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int zero_count = 0;
    for (char c : s) {
        if (c == '0') {
            zero_count++;
        }
    }
 
    
    if (zero_count % 2 == 1 && zero_count > 1) {
        cout << "ALICE
";
    } else {
        cout << "BOB
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