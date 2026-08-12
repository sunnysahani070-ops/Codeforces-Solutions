#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    if (n % 2 == 0) {
        cout << (k - 1) % n + 1 << "
";
    } else {
        long long skips = (k - 1) / (n / 2);
        cout << (k - 1 + skips) % n + 1 << "
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