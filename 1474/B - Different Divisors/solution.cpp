#include <iostream>
 
using namespace std;
 
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
long long nextPrime(long long n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}
 
void solve() {
    long long d;
    cin >> d;
    
    
    long long p = nextPrime(1 + d);
    
    
    long long q = nextPrime(p + d);
    
    
    cout << p * q << "
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