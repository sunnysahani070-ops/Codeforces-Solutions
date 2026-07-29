#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long p;
    cin >> n >> p;
 
    vector<long long> a(n);
    vector<long long> b(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
 
    vector<pair<long long, long long>> residents(n);
    for (int i = 0; i < n; ++i) {
        residents[i] = {b[i], a[i]};
    }
 
    sort(residents.begin(), residents.end());
 
    long long total_cost = p;
    long long notify_count = 1;
 
    for (int i = 0; i < n; ++i) {
        long long cost = residents[i].first;
        long long capacity = residents[i].second;
 
        if (cost >= p) {
            break;
        }
 
        long long needed = n - notify_count;
        long long can_take = min(needed, capacity);
 
        total_cost += can_take * cost;
        notify_count += can_take;
 
        if (notify_count >= n) {
            break;
        }
    }
 
    if (notify_count < n) {
        total_cost += (n - notify_count) * p;
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