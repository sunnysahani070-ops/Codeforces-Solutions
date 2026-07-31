#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long w, h;
    cin >> w >> h;
 
    // Helper lambda to read a side's points and return the max span (last - first)
    auto get_max_span = []() {
        int k;
        cin >> k;
        long long first_val = -1, last_val = -1;
        for (int i = 0; i < k; ++i) {
            long long val;
            cin >> val;
            if (i == 0) first_val = val;
            if (i == k - 1) last_val = val;
        }
        return last_val - first_val;
    };
 
    long long span_bottom = get_max_span();
    long long span_top = get_max_span();
    long long span_left = get_max_span();
    long long span_right = get_max_span();
 
    long long ans1 = span_bottom * h;
    long long ans2 = span_top * h;
    long long ans3 = span_left * w;
    long long ans4 = span_right * w;
 
    cout << max({ans1, ans2, ans3, ans4}) << "
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