#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    vector<int> valid_indices;
    long long count = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        
        if (a[i] < i) {
            long long valid_count = lower_bound(valid_indices.begin(), valid_indices.end(), a[i]) - valid_indices.begin();
            count += valid_count;
            
            valid_indices.push_back(i);
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