#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int get_cost(const string& s, char c) {
    int left = 0, right = s.length() - 1;
    int count = 0;
    
    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else if (s[left] == c) {
            left++;
            count++;
        } else if (s[right] == c) {
            right--;
            count++;
        } else {
            return -1;
        }
    }
    return count;
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int left = 0, right = n - 1;
    while (left < right && s[left] == s[right]) {
        left++;
        right--;
    }
 
    if (left >= right) {
        cout << 0 << "
";
        return;
    }
 
    int cost1 = get_cost(s, s[left]);
    int cost2 = get_cost(s, s[right]);
 
    if (cost1 == -1 && cost2 == -1) {
        cout << -1 << "
";
    } else if (cost1 == -1) {
        cout << cost2 << "
";
    } else if (cost2 == -1) {
        cout << cost1 << "
";
    } else {
        cout << min(cost1, cost2) << "
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