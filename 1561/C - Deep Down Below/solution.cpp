#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> caves(n);
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int max_req = 0;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            max_req = max(max_req, a - j + 1);
        }
        caves[i] = {max_req, k};
    }
    
    sort(caves.begin(), caves.end());
    
    long long ans = caves[0].first;
    long long current_power = ans;
    
    for (int i = 0; i < n; i++) {
        if (current_power < caves[i].first) {
            ans += caves[i].first - current_power;
            current_power = caves[i].first;
        }
        current_power += caves[i].second;
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