#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    map<int, int> prime_counts;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        for (int p = 2; p * p <= a; ++p) {
            while (a % p == 0) {
                prime_counts[p]++;
                a /= p;
            }
        }
        if (a > 1) {
            prime_counts[a]++;
        }
    }
    
    bool possible = true;
    for (auto& [prime, count] : prime_counts) {
        if (count % n != 0) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
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