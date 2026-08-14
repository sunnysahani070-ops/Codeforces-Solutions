#include <iostream>
 
using namespace std;
 
long long get_emotes(long long m, long long k) {
    if (m <= k) {
        
        return m * (m + 1) / 2;
    } else {
        
        long long total_possible_emotes = k * k;
        long long remaining_messages = 2 * k - 1 - m;
        return total_possible_emotes - remaining_messages * (remaining_messages + 1) / 2;
    }
}
 
void solve() {
    long long k, x;
    cin >> k >> x;
 
    long long left = 1;
    long long right = 2 * k - 1;
    long long ans = 2 * k - 1;
 
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        
        if (get_emotes(mid, k) >= x) {
            ans = mid;
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
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