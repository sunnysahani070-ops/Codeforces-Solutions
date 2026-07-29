#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    vector<pair<long long, int>> monsters(n);
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        long long rem = a % k;
        if (rem == 0) {
            rem = k;
        }
        monsters[i] = {rem, i + 1};
    }
    sort(monsters.begin(), monsters.end(), [](const pair<long long, int>& x, const pair<long long, int>& y) {
        if (x.first != y.first) {
            return x.first > y.first;
        }
        return x.second < y.second;
    });
 
    for (int i = 0; i < n; i++) {
        cout << monsters[i].second << (i == n - 1 ? "" : " ");
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