#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector<pair<int, int>> get_top_3(const vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; ++i) {
        pairs[i] = {arr[i], i};
    }
    sort(pairs.rbegin(), pairs.rend());
    
    return {pairs[0], pairs[1], pairs[2]};
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
 
    vector<pair<int, int>> top_a = get_top_3(a);
    vector<pair<int, int>> top_b = get_top_3(b);
    vector<pair<int, int>> top_c = get_top_3(c);
 
    int max_friends = 0;
 
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                int day_a = top_a[i].second;
                int day_b = top_b[j].second;
                int day_c = top_c[k].second;
 
                if (day_a != day_b && day_b != day_c && day_a != day_c) {
                    int current_sum = top_a[i].first + top_b[j].first + top_c[k].first;
                    max_friends = max(max_friends, current_sum);
                }
            }
        }
    }
 
    cout << max_friends << "
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