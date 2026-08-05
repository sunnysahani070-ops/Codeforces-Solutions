#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
 
    long long diff = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int r = n - 1 - i;
            int c = n - 1 - j;
            if (i < r || (i == r && j < c)) {
                if (a[i][j] != a[r][c]) {
                    diff++;
                }
            }
        }
    }
 
    if (k < diff) {
        cout << "NO
";
    } else {
        long long rem = k - diff;
        if (n % 2 == 1 || rem % 2 == 0) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
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