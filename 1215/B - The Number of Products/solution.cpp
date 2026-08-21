#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    long long even_count = 1;
    long long odd_count = 0;
    long long pos_ans = 0;
    long long neg_ans = 0;
    int current_parity = 0;
 
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a < 0) {
            current_parity ^= 1;
        }
 
        if (current_parity == 0) {
            pos_ans += even_count;
            neg_ans += odd_count;
            even_count++;
        } else {
            pos_ans += odd_count;
            neg_ans += even_count;
            odd_count++;
        }
    }
 
    cout << neg_ans << " " << pos_ans << "
";
 
    return 0;
}