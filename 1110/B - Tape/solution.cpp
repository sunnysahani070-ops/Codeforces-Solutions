#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    if (n == 1) {
        cout << 1 << "
";
        return 0;
    }
    if (k >= n) {
        cout << n << "
";
        return 0;
    }
    vector<int> gaps;
    for (int i = 1; i < n; ++i) {
        gaps.push_back(b[i] - b[i-1] - 1); 
    }
 
    sort(gaps.rbegin(), gaps.rend());
 
    int total_tape_length = b[n-1] - b[0] + 1;
 
    for (int i = 0; i < k - 1; ++i) {
        total_tape_length -= gaps[i];
    }
 
    cout << total_tape_length << "
";
 
    return 0;
}