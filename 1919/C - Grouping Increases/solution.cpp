#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int x = 1e9; 
    int y = 1e9;
    int penalty = 0;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        
        if (x > y) {
            swap(x, y);
        }
        
        if (v <= x) {
            x = v;       
        } else if (v <= y) {
            y = v;        
        } else {
            x = v;   
            penalty++;
        }
    }
    
    cout << penalty << "
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