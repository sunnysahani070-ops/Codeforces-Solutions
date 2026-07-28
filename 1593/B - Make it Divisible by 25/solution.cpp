#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int solve_pair(const string& s, char d1, char d2) {
    int n = s.length();
    int pos2 = -1, pos1 = -1;
 
   
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == d2) {
            pos2 = i;
            break;
        }
    }
 
    if (pos2 == -1) return 1e9; 
    for (int i = pos2 - 1; i >= 0; --i) {
        if (s[i] == d1) {
            pos1 = i;
            break;
        }
    }
 
    if (pos1 == -1) return 1e9; 
 
    return (n - 1 - pos2) + (pos2 - pos1 - 1);
}
 
void solve() {
    string s;
    cin >> s;
 
    vector<pair<char, char>> targets = {
        {'0', '0'},
        {'2', '5'},
        {'5', '0'},
        {'7', '5'}
    };
 
    int min_ops = 1e9;
    for (auto& p : targets) {
        min_ops = min(min_ops, solve_pair(s, p.first, p.second));
    }
 
    cout << min_ops << "
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