#include <iostream>
#include <algorithm>
 
using namespace std;
 
inline void solve_tc() {
    long long e, p, m;
    cin >> e >> p >> m;
    
    long long diff = p - e;
    long long steps = max(0LL, diff - e + 1);
    long long active = min(m, steps);
    
    long long res = 0;
    long long curr = e;
    
    while (active > 0) {
        res += diff % curr;
        curr++;
        active--;
    }
    
    long long rem = m - min(m, steps);
    res += rem * diff;
    
    cout << res << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve_tc();
        }
    }
    return 0;
}