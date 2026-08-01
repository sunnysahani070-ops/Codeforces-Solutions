#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    set<long long> s;
    bool found_duplicate = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (s.count(b[i])) {
            found_duplicate = true;
        }
        s.insert(b[i]);
    }
    
    if (found_duplicate) {
        cout << "YES
";
    } else {
        cout << "NO
";
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