#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, r, b;
    cin >> n >> r >> b;
 
    int gaps = b + 1;
 
    int base = r / gaps;
 
    int extra = r % gaps;
 
    string result = "";
 
    for (int i = 0; i < gaps; i++) {
        
        int r_count = base;
        
        
        if (i < extra) {
            r_count++;
        }
 
        result.append(r_count, 'R');
 
        if (i < b) {
            result += 'B';
        }
    }
 
    cout << result << "
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