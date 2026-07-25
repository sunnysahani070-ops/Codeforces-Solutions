#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    
    if (s.find("...") != string::npos) {
        cout << 2 << "
";
    } else {
        
        int dot_count = 0;
        for (char c : s) {
            if (c == '.') {
                dot_count++;
            }
        }
        cout << dot_count << "
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