#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long S;
    int q;
    cin >> S >> q;
 
    vector<long long> d;
    for (long long i = 1; i * i <= S; ++i) {
        if (S % i == 0) {
            d.push_back(i);
            if (i * i != S) {
                d.push_back(S / i);
            }
        }
    }
    sort(d.begin(), d.end());
 
    int k = d.size();
    vector<long long> h(k);
    vector<long long> P(k);
 
    for (int i = 0; i < k; ++i) {
        h[i] = S / d[i];
        long long w = d[i] - (i > 0 ? d[i-1] : 0);
        long long area = w * h[i];
        P[i] = (i > 0 ? P[i-1] : 0) + area;
    }
 
    while (q--) {
        long long X, Y;
        cin >> X >> Y;
 
        int m = lower_bound(d.begin(), d.end(), X) - d.begin();
        
        long long req = (S + Y - 1) / Y;
        int t = lower_bound(d.begin(), d.end(), req) - d.begin();
 
        long long ans = 0;
        if (t > m) {
            ans = X * Y;
        } else {
            long long w_gt = (t > 0 ? d[t-1] : 0);
            ans += w_gt * Y;
 
            if (m > t) {
                ans += P[m-1] - (t > 0 ? P[t-1] : 0);
            }
 
            long long w_partial = X - (m > 0 ? d[m-1] : 0);
            ans += w_partial * h[m];
        }
        cout << ans << "
";
    }
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