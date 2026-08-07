#include <iostream>
#include <numeric>
 
using namespace std;
 
// Function to calculate Least Common Multiple (LCM)
long long lcm(long long a, long long b) {
    return (a / std::gcd(a, b)) * b;
}
 
// Function to calculate sum of numbers from 1 to k
long long sum_first_k(long long k) {
    return k * (k + 1) / 2;
}
 
// Function to calculate sum of top k numbers from n down to n - k + 1
long long sum_top_k(long long n, long long k) {
    return k * (2 * n - k + 1) / 2;
}
 
void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
 
    long long common_count = n / lcm(x, y);
    long long add_count = (n / x) - common_count;
    long long sub_count = (n / y) - common_count;
 
    long long max_sum = sum_top_k(n, add_count);
    long long min_sum = sum_first_k(sub_count);
 
    cout << max_sum - min_sum << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}