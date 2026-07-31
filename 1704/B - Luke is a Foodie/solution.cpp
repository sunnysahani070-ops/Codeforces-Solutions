#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long low = a[0] - x;
        long long high = a[0] + x;
        int changes = 0;
 
        for (int i = 1; i < n; i++) {
            low = max(low, a[i] - x);
            high = min(high, a[i] + x);
 
            if (low > high) {
                changes++;
                low = a[i] - x;
                high = a[i] + x;
            }
        }
 
        cout << changes << "
";
    }
 
    return 0;
}