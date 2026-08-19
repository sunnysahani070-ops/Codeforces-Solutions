#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    map<int, vector<int>> rows;
    map<int, vector<int>> cols;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int color;
            cin >> color;
            rows[color].push_back(i);
            cols[color].push_back(j);
        }
    }
 
    long long total_distance = 0;
 
    for (auto& [color, r] : rows) {
        sort(r.begin(), r.end());
        long long k = r.size();
        for (long long i = 0; i < k; ++i) {
            total_distance += 1LL * r[i] * i - 1LL * r[i] * (k - 1 - i);
        }
    }
 
    for (auto& [color, c] : cols) {
        sort(c.begin(), c.end());
        long long k = c.size();
        for (long long i = 0; i < k; ++i) {
            total_distance += 1LL * c[i] * i - 1LL * c[i] * (k - 1 - i);
        }
    }
 
    cout << total_distance << "
";
 
    return 0;
}