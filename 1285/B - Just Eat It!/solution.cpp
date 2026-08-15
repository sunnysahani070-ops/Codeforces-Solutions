#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long yasser_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        yasser_sum += a[i];
    }
 
    long long max_adel = -2e18;
    long long current_sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        current_sum = max(a[i], current_sum + a[i]);
        max_adel = max(max_adel, current_sum);
    }
 
    current_sum = 0;
    for (int i = 1; i < n; i++) {
        current_sum = max(a[i], current_sum + a[i]);
        max_adel = max(max_adel, current_sum);
    }
 
    if (yasser_sum > max_adel) {
        cout << "YES
";
    } else {
        cout << "NO
";
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