#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    int i = 0, j = 1;
    bool possible = false;
 
    while (i < n && j < n) {
        if (i == j) {
            j++;
            continue;
        }
 
        long long diff = a[j] - a[i];
 
        if (diff == k) {
            possible = true;
            break;
        } else if (diff < k) {
            j++;
        } else {
            i++;
        }
    }
 
    if (possible) {
        cout << "YES
";
    } else {
        cout << "NO
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