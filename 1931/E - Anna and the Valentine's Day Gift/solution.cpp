#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    int total_len = 0;
    vector<int> zeros;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        total_len += s.length();
        int z = 0;
        for (int j = s.length() - 1; j >= 0; j--) {
            if (s[j] == '0') {
                z++;
            } else {
                break;
            }
        }
        zeros.push_back(z);
    }
    
    sort(zeros.rbegin(), zeros.rend());
    
    for (size_t i = 0; i < zeros.size(); i += 2) {
        total_len -= zeros[i];
    }
    
    if (total_len > m) {
        cout << "Sasha
";
    } else {
        cout << "Anna
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