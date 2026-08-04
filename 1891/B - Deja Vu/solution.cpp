#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> x;
    int min_val = 31;
    for (int i = 0; i < q; ++i) {
        int val;
        cin >> val;
        if (val < min_val) {
            x.push_back(val);
            min_val = val;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int query_val : x) {
            if (a[i] % (1LL << query_val) == 0) {
                a[i] += (1LL << (query_val - 1));
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
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