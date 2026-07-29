#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }
 
    int t_length = 0;
    for (char c : s) {
        if (c == '0') {
            if (cnt1 > 0) {
                cnt1--;
                t_length++;
            } else {
                break;
            }
        } else {
            if (cnt0 > 0) {
                cnt0--;
                t_length++;
            } else {
                break;
            }
        }
    }
 
    cout << s.length() - t_length << "
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