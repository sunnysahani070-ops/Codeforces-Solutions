#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= 60; ++i) {
        long long k = 1LL << i; 
        set<long long> remainders;
        
        for (int j = 0; j < n; ++j) {
            remainders.insert(a[j] % k);
        }
        if (remainders.size() == 2) {
            cout << k << "
";
            return;
        }
    }
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