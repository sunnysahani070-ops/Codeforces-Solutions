#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> p(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> p[i];
    }
    
    int m;
    cin >> m;
    
    vector<bool> has_dam(n + 1, false);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        has_dam[a] = true;
    }
    
    vector<int> cameras;
    
    for (int i = n; i >= 2; i--) {
        if (has_dam[i]) {
            if (has_dam[p[i]]) {
                cameras.push_back(i);
            } else {
                has_dam[p[i]] = true;
            }
        }
    }
    
    cout << cameras.size();
    for (int i = 0; i < cameras.size(); i++) {
        cout << " " << cameras[i];
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}