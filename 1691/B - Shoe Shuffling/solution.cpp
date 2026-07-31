#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
 
    for (auto& pair : freq) {
        if (pair.second == 1) {
            cout << -1 << "
";
            return;
        }
    }
 
    int l = 0;
    vector<int> p(n);
    
    while (l < n) {
        int r = l;
        while (r < n && a[r] == a[l]) {
            r++;
        }
        
        for (int i = l; i < r; i++) {
            if (i == r - 1) {
                p[i] = l + 1;
            } else {
                p[i] = i + 2;
            }
        }
        l = r;
    }
 
    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
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