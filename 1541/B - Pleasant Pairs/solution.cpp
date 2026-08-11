#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long count = 0;
    for (int i = 1; i <= n; i++) {
        for (long long j = a[i] - i % a[i]; j <= n; j += a[i]) {
            if (j > i && a[i] * a[j] == i + j) {
                count++;
            }
        }
    }
    cout << count << "
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