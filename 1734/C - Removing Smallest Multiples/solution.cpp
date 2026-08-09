#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    
    vector<bool> visited(n + 1, false);
    long long total_cost = 0;
 
    for (int k = 1; k <= n; ++k) {
        for (int mult = k; mult <= n; mult += k) {
            if (s[mult - 1] == '1') {
                break;
            }
            
            if (!visited[mult]) {
                visited[mult] = true;
                total_cost += k;
            }
        }
    }
 
    cout << total_cost << "
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