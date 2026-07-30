#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> right_freq(26, 0);
    vector<int> left_freq(26, 0);
 
    for (char c : s) {
        right_freq[c - 'a']++;
    }
 
    int left_distinct = 0;
    int right_distinct = 0;
 
    for (int count : right_freq) {
        if (count > 0) right_distinct++;
    }
 
    int max_distinct = 0;
 
    for (int i = 0; i < n - 1; i++) {
        int idx = s[i] - 'a';
        if (left_freq[idx] == 0) {
            left_distinct++;
        }
        left_freq[idx]++;
        right_freq[idx]--;
        if (right_freq[idx] == 0) {
            right_distinct--;
        }
 
        max_distinct = max(max_distinct, left_distinct + right_distinct);
    }
 
    cout << max_distinct << "
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