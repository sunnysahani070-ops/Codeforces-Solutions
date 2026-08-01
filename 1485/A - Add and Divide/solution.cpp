#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
    
    long long min_ops = 1e18;
    for (long long add = 0; add <= 30; ++add) {
        long long current_b = b + add;
        
        
        if (current_b <= 1) continue; 
        
        long long temp_a = a;
        long long ops = add; 
        
        while (temp_a > 0) {
            temp_a /= current_b;
            ops++;
        }
        
        min_ops = min(min_ops, ops);
    }
    
    cout << min_ops << "
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