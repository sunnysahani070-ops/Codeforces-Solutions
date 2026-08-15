#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    if (!(cin >> s)) return 0;
 
    long long total_w = 0;
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == 'v' && s[i - 1] == 'v') {
            total_w++;
        }
    }
 
    long long w_left = 0;
    long long ans = 0;
 
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == 'v' && s[i - 1] == 'v') {
            w_left++;
        } else if (s[i] == 'o') {
            long long w_right = total_w - w_left;
            ans += w_left * w_right;
        }
    }
 
    cout << ans << "
";
 
    return 0;
}