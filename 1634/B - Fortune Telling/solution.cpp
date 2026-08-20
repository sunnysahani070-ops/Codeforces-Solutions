#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        for (int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            
            x += temp; 
        }
        if (x % 2 == y % 2) {
            cout << "Alice
";
        } else {
            cout << "Bob
";
        }
    }
    return 0;
}