#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t > 0) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        
        int maxi = a[0]; 
 
        
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, a[i + 1] - a[i]);
        }
        
        
        maxi = max(maxi, 2 * (x - a[n - 1]));
        
        cout << maxi << "
";
        t--;
    }
    
    return 0;
}