#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long maxSum = a[0];
    long long currentSum = a[0];
 
    for (int i = 1; i < n; i++) {
        
        if ((abs(a[i]) % 2) != (abs(a[i - 1]) % 2)) {
            
            currentSum = max((long long)a[i], currentSum + a[i]);
        } else {
            
            currentSum = a[i];
        }
        maxSum = max(maxSum, currentSum);
    }
 
    cout << maxSum << "
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