#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    sort(a.begin(), a.end());
    
    long long sum = 0;
    long long total_items = 0;
    
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum <= x) {
            total_items += (x - sum) / (i + 1) + 1;
        }
    }
    
    cout << total_items << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}