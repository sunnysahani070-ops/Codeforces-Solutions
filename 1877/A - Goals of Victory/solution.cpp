#include <iostream>
#include <numeric>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n - 1);
    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    
    // The missing efficiency is the negative of the sum of the given efficiencies
    cout << -sum << "
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