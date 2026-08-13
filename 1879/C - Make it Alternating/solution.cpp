#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    long long MOD = 998244353;
 
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.length();
        vector<long long> blocks;
        int current_len = 1;
 
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                current_len++;
            } else {
                blocks.push_back(current_len);
                current_len = 1;
            }
        }
        blocks.push_back(current_len);
 
        long long min_ops = 0;
        long long ways = 1;
 
        for (long long len : blocks) {
            min_ops += (len - 1);
            ways = (ways * len) % MOD;
        }
 
        for (long long i = 1; i <= min_ops; i++) {
            ways = (ways * i) % MOD;
        }
 
        cout << min_ops << " " << ways << "
";
    }
 
    return 0;
}