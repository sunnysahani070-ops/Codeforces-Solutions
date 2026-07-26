#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt2 = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) {
            cnt2++;
        }
    }
    
    
    if (cnt2 % 2 != 0) {
        cout << -1 << "
";
        return;
    }
    
    
    if (cnt2 == 0) {
        cout << 1 << "
";
        return;
    }
    
    int target = cnt2 / 2;
    int current_cnt2 = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 2) {
            current_cnt2++;
        }
        
        if (current_cnt2 == target) {
            cout << i + 1 << "
";
            return;
        }
    }
    
    cout << -1 << "
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