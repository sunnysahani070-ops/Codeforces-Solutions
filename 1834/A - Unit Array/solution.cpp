#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == -1) neg++;
        else pos++;
    }
    
    int ops = 0;
    
    
    if (neg > pos) {
        int needed = (neg - pos + 1) / 2;
        ops += needed;
        neg -= needed;
    }
    
    
    if (neg % 2 != 0) {
        ops += 1;
    }
    
    cout << ops << "
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