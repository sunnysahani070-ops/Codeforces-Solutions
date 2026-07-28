#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        
        long long remainder = n % 4;
        long long full_blocks = n / 4;
        
        
        
        long long jump = n - remainder + 1;
        for (long long i = 0; i < remainder; i++) {
            if (x % 2 == 0) {
                x = x - jump;
            } else {
                x = x + jump;
            }
            jump++;
        }
        
        
        
        cout << x << "
";
    }
    return 0;
}