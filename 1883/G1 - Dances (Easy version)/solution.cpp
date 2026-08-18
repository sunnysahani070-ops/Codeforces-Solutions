#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    a[0] = 1; 
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int i = 0; 
    int j = 0; 
    int matches = 0;
    
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            matches++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << n - matches << "
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