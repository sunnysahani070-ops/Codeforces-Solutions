#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    int max_freq = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
    }
    
    int rem = n - max_freq;
    int ops = 0;
    int current_count = max_freq;
    
    
    while (rem > 0) {
        ops++; 
        
        int swaps = min(rem, current_count);
        ops += swaps;
        
        rem -= swaps;
        current_count += swaps;
    }
    
    cout << ops << "
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