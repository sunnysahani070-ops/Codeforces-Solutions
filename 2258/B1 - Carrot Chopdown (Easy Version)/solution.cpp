#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void execute() {
    int N, M;
    cin >> N >> M;
    vector<int> counts(M + 1, 0);
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        counts[val]++;
    }
    vector<long long> running_sum(M + 2, 0);
    for (int i = M; i > 0; --i) {
        running_sum[i] = running_sum[i + 1] + counts[i];
    }
    long long max_result = 0;
    for (int i = 1; i <= M; ++i) {
        long long current_val = running_sum[i];
        if (2 * i <= M) {
            current_val += counts[2 * i];
        }
        max_result = max(max_result, current_val);
    }
    cout << max_result << "
";
}
 
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int tests;
    if (cin >> tests) {
        while (tests--) {
            execute();
        }
    }
    return 0;
}