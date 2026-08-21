#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> count(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
    
    sort(count.rbegin(), count.rend());
    
    int ans = 0;
    int current_max = count[0];
    
    for (int i = 0; i <= n; i++) {
        if (count[i] == 0 || current_max == 0) break;
        int take = min(count[i], current_max);
        ans += take;
        current_max = take - 1;
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}