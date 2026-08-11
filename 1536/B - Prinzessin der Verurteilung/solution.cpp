#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    for (char c = 'a'; c <= 'z'; ++c) {
        string t(1, c);
        if (s.find(t) == string::npos) {
            cout << t << "
";
            return;
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = 'a'; c2 <= 'z'; ++c2) {
            string t = "";
            t += c1;
            t += c2;
            if (s.find(t) == string::npos) {
                cout << t << "
";
                return;
            }
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = 'a'; c2 <= 'z'; ++c2) {
            for (char c3 = 'a'; c3 <= 'z'; ++c3) {
                string t = "";
                t += c1;
                t += c2;
                t += c3;
                if (s.find(t) == string::npos) {
                    cout << t << "
";
                    return;
                }
            }
        }
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