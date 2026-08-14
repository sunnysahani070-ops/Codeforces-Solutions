#include <iostream>
#include <set>
 
using namespace std;
 
set<long long> valid_sizes;
 
void precompute() {
    for (long long k = 2; k <= 1000; k++) {
        long long current_term = k * k;
        long long sum = 1 + k + current_term;
        
        while (sum <= 1000000) {
            valid_sizes.insert(sum);
            current_term *= k;
            sum += current_term;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        if (valid_sizes.count(n)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    
    return 0;
}