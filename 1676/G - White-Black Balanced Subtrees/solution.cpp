#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 2; i <= n; ++i) {
        cin >> a[i];
    }
    
    string s;
    cin >> s;
    
    vector<int> val(n + 1);
    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] == 'W') {
            val[i] = 1;
        } else {
            val[i] = -1;
        }
    }
    
    int balanced_count = 0;
    
    for (int i = n; i >= 2; --i) {
        if (val[i] == 0) {
            balanced_count++;
        }
        val[a[i]] += val[i]; 
    }
    
    if (val[1] == 0) {
        balanced_count++;
    }
    
    cout << balanced_count << "
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