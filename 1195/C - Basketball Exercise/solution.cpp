#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<long long> h1(n), h2(n);
    for (int i = 0; i < n; ++i) {
        cin >> h1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> h2[i];
    }
 
    long long dp0 = 0, dp1 = 0;
 
    for (int i = 0; i < n; ++i) {
        long long new_dp0 = max(dp0, dp1 + h1[i]);
        long long new_dp1 = max(dp1, dp0 + h2[i]);
        
        dp0 = new_dp0;
        dp1 = new_dp1;
    }
 
    cout << max(dp0, dp1) << "
";
 
    return 0;
}