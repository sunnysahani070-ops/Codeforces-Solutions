#include <iostream>
#include <vector>
#include <string>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> pos;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            pos.push_back(i);
        }
    }
 
    if (pos.empty()) {
        cout << 0 << "
";
        return;
    }
 
    int k = pos.size();
    int mid = k / 2;
    long long ans = 0;
 
    for (int i = 0; i < k; ++i) {
        int target_pos = pos[mid] - mid + i;
        ans += abs(pos[i] - target_pos);
    }
 
    cout << ans << "
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