#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int oddCount = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    
    if (oddCount % 2 == 0) {
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