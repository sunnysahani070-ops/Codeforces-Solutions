#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
int getMSB(int n) {
    return 31 - __builtin_clz(n);
}
 
void solve() {
    int n;
    cin >> n;
    map<int, long long> msb_count;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        msb_count[getMSB(a)]++;
    }
 
    long long ans = 0;
    for (auto const& [msb, count] : msb_count) {
        ans += count * (count - 1) / 2;
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