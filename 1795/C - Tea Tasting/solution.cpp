#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1), b(n + 1), p(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        p[i] = p[i - 1] + b[i];
    }
 
    vector<long long> cnt(n + 2, 0), rem(n + 2, 0);
 
    for (int i = 1; i <= n; i++) {
        int idx = upper_bound(p.begin() + i, p.begin() + n + 1, a[i] + p[i - 1]) - p.begin() - 1;
        
        if (idx >= i) {
            cnt[i]++;
            cnt[idx + 1]--;
        }
        if (idx < n) {
            rem[idx + 1] += a[i] - (p[idx] - p[i - 1]);
        }
    }
 
    long long current_cnt = 0;
    for (int i = 1; i <= n; i++) {
        current_cnt += cnt[i];
        cout << current_cnt * b[i] + rem[i] << (i == n ? "" : " ");
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