#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }
 
    
    if (counts.size() > 2) {
        cout << "No" << endl;
    } 
    else if (counts.size() == 1) {
        cout << "Yes" << endl;
    } 
    else {
        
        auto it = counts.begin();
        int count1 = it->second;
        it++;
        int count2 = it->second;
 
        if (abs(count1 - count2) <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}