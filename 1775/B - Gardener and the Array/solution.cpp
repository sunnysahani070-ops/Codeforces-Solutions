#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> c(n);
    
    map<int, int> bit_counts;
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        c[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> c[i][j];
            bit_counts[c[i][j]]++; 
        }
    }
    
    
    for (int i = 0; i < n; ++i) {
        bool can_remove = true;
        for (int bit : c[i]) {
            if (bit_counts[bit] == 1) {
                can_remove = false;
                break;
            }
        }
        
        if (can_remove) {
            cout << "Yes
";
            return;
        }
    }
    
    cout << "No
";
}
 
int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}