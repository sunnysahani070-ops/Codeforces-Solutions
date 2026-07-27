#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
void solve() {
    string s, t;
    if (!(cin >> s >> t)) return;
 
    map<char, int> count;
    for (char c : t) {
        count[c]++;
    }
 
    string res = "";
    for (int i = (int)s.length() - 1; i >= 0; --i) {
        if (count[s[i]] > 0) {
            res += s[i];
            count[s[i]]--;
        }
    }
 
    reverse(res.begin(), res.end());
 
    if (res == t) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        while (n--) {
            solve();
        }
    }
    return 0;
}