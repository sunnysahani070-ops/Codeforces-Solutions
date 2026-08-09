#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    map<int, int> count;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        count[x]++;
    }
 
    int total_sets = 0;
    int prev_val = -1;
    int prev_count = 0;
 
    for (auto& pair : count) {
        int x = pair.first;
        int cnt = pair.second;
 
        if (x == prev_val + 1) {
            if (cnt > prev_count) {
                total_sets += (cnt - prev_count);
            }
        } else {
            total_sets += cnt;
        }
 
        prev_val = x;
        prev_count = cnt;
    }
 
    cout << total_sets << "
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