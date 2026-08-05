#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
 
    vector<vector<long long>> stacks(3, vector<long long>(n));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> stacks[i][j];
        }
    }
 
    long long current_knowledge = 0;
 
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            long long book = stacks[i][j];
            
            
            if ((book | x) != x) {
                break;
            }
            current_knowledge |= book;
        }
    }
 
    if (current_knowledge == x) {
        cout << "Yes
";
    } else {
        cout << "No
";
    }
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