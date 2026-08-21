#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    map<long long, long long> rem_count;
    long long max_moves = 0;
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        long long rem = (k - (a % k)) % k;
        if (rem > 0) {
            rem_count[rem]++;
            long long moves_needed = rem + (rem_count[rem] - 1) * k + 1;
            max_moves = max(max_moves, moves_needed);
        }
    }
    
    cout << max_moves << "
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