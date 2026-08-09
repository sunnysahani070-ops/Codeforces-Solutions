#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> last_pos(k + 1, 0);
    vector<int> max_gap(k + 1, 0);
    vector<int> second_max_gap(k + 1, 0);
 
    for (int i = 1; i <= n; ++i) {
        int color;
        cin >> color;
        int gap = i - last_pos[color] - 1;
        
        if (gap > max_gap[color]) {
            second_max_gap[color] = max_gap[color];
            max_gap[color] = gap;
        } else if (gap > second_max_gap[color]) {
            second_max_gap[color] = gap;
        }
        
        last_pos[color] = i;
    }
 
    for (int color = 1; color <= k; ++color) {
        int gap = n + 1 - last_pos[color] - 1;
        if (gap > max_gap[color]) {
            second_max_gap[color] = max_gap[color];
            max_gap[color] = gap;
        } else if (gap > second_max_gap[color]) {
            second_max_gap[color] = gap;
        }
    }
 
    int ans = n;
    for (int color = 1; color <= k; ++color) {
        int max_step = max(max_gap[color] / 2, second_max_gap[color]);
        ans = min(ans, max_step);
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