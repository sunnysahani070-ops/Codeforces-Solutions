#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
 
    vector<int> balanced(n, 0);
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == '0') zeros++;
        else ones++;
        if (zeros == ones) {
            balanced[i] = 1;
        }
    }
 
    bool possible = true;
    bool flipped = false;
 
    for (int i = n - 1; i >= 0; --i) {
        char current_a = a[i];
        if (flipped) {
            if (current_a == '0') current_a = '1';
            else current_a = '0';
        }
 
        if (current_a != b[i]) {
            if (balanced[i]) {
                flipped = !flipped;
            } else {
                possible = false;
                break;
            }
        }
    }
 
    if (possible) cout << "YES
";
    else cout << "NO
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