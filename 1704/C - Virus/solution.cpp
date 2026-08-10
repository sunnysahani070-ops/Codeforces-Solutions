#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n;
    int m;
    cin >> n >> m;
 
    vector<long long> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    vector<long long> gaps;
    for (int i = 0; i < m - 1; ++i) {
        gaps.push_back(a[i + 1] - a[i] - 1);
    }
    gaps.push_back(n - a[m - 1] + a[0] - 1);
 
    sort(gaps.rbegin(), gaps.rend());
 
    long long saved_houses = 0;
    long long days_passed = 0;
 
    for (long long gap : gaps) {
        
        long long current_gap = gap - 2 * days_passed;
 
        if (current_gap <= 0) {
            break;
        }
 
        if (current_gap == 1 || current_gap == 2) {
            saved_houses += 1;
            days_passed += 1;
        } else {
            saved_houses += (current_gap - 1);
            days_passed += 2;
        }
    }
 
    cout << n - saved_houses << "
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