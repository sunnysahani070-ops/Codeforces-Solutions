#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }
    sort(a.rbegin(), a.rend());
 
    vector<long long> x(n + 1);
    
    x[0] = 0;
 
    long long total_time = 0;
    long long dist = 1;
 
    
    for (int i = 0; i < n; ++i) {
        long long pos;
        if (i % 2 == 0) {
            pos = dist;
        } else {
            pos = -dist;
            dist++;
        }
 
        int orig_idx = a[i].second;
        long long visits = a[i].first;
 
        x[orig_idx] = pos;
        total_time += 2LL * abs(pos) * visits;
    }
 
    
    cout << total_time << "
";
 
   
    for (int i = 0; i <= n; ++i) {
        cout << x[i] << (i == n ? "" : " ");
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