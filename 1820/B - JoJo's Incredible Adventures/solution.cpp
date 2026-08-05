#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    long long n = s.length();
    
    long long ones_count = 0;
    for (char c : s) {
        if (c == '1') ones_count++;
    }
    
    if (ones_count == n) {
        cout << n * n << "
";
        return;
    }
    
    string double_s = s + s;
    long long max_k = 0;
    long long current_k = 0;
    
    for (char c : double_s) {
        if (c == '1') {
            current_k++;
            max_k = max(max_k, current_k);
        } else {
            current_k = 0;
        }
    }
    
    long long side1 = (max_k + 1) / 2;
    long long side2 = (max_k + 2) / 2;
    
    cout << side1 * side2 << "
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