#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    int min_ops = k;
    int even_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        }
        
        int rem = a[i] % k;
        int ops = (rem == 0) ? 0 : k - rem;
        min_ops = min(min_ops, ops);
    }
    
    if (k == 4) {
        
        int ops_for_two_evens = max(0, 2 - even_count);
        min_ops = min(min_ops, ops_for_two_evens);
    }
    
    cout << min_ops << "
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