#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, m;
    cin >> n >> m;
 
    int cnt2 = 0, cnt5 = 0;
    long long temp = n;
    while (temp > 0 && temp % 2 == 0) {
        cnt2++;
        temp /= 2;
    }
    temp = n;
    while (temp > 0 && temp % 5 == 0) {
        cnt5++;
        temp /= 5;
    }
 
    long long k = 1;
    
    while (cnt2 < cnt5 && k * 2 <= m) {
        cnt2++;
        k *= 2;
    }
    while (cnt5 < cnt2 && k * 5 <= m) {
        cnt5++;
        k *= 5;
    }
    
    while (k * 10 <= m) {
        k *= 10;
    }
 
    if (k == 1) {
        cout << n * m << "
";
    } else {
        k = (m / k) * k;
        cout << n * k << "
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}