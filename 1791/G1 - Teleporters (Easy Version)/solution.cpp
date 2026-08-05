#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long c;
    cin >> n >> c;
    
    vector<long long> total_costs(n);
    for (int i = 0; i < n; i++) {
        long long a_i;
        cin >> a_i;
        total_costs[i] = a_i + (i + 1);
    }
    sort(total_costs.begin(), total_costs.end());
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (c >= total_costs[i]) {
            c -= total_costs[i];
            count++;
        } else {
            break;
        }
    }
    
    cout << count << "
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