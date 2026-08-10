#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int total_flips = 0;
    
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < (n + 1) / 2; ++j) {
            
            int val1 = grid[i][j] - '0';
            int val2 = grid[j][n - 1 - i] - '0';
            int val3 = grid[n - 1 - i][n - 1 - j] - '0';
            int val4 = grid[n - 1 - j][i] - '0';
            
            int sum = val1 + val2 + val3 + val4;
            
            
            total_flips += min(sum, 4 - sum);
        }
    }
    
    cout << total_flips << "
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