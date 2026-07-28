#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
 
    long long sum_a = 0;
    long long max_beauty = 0;
 
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        sum_a += val;
        max_beauty += (val + x - 1) / x; 
    }
 
    long long min_beauty = (sum_a + x - 1) / x;
 
    cout << min_beauty << " " << max_beauty << "
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