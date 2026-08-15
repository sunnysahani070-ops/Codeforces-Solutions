#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (cin >> n) {
        if (n % 2 == 0) {
            long long k = n / 2;
            cout << (k + 1) * (k + 1) << "
";
        } else {
            // If n is odd
            long long k1 = (n + 1) / 2;
            long long k2 = (n - 1) / 2;
            cout << 2LL * (k1 + 1) * (k2 + 1) << "
";
        }
    }
    
    return 0;
}