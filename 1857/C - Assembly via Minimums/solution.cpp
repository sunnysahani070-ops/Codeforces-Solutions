#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int m = n * (n - 1) / 2;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    vector<int> a;
    int index = 0;
    
    
    for (int i = n - 1; i >= 1; --i) {
        a.push_back(b[index]);
        index += i;
    }
    
    a.push_back(1000000000);
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
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