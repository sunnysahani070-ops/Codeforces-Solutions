#include <iostream>
#include <vector>
 
using namespace std;
 
bool checkPalindrome(const vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        if (a[l] == x) {
            l++;
        } else if (a[r] == x) {
            r--;
        } else if (a[l] != a[r]) {
            return false;
        } else {
            l++;
            r--;
        }
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int l = 0, r = n - 1;
    bool is_kalindrome = true;
 
    while (l < r) {
        if (a[l] != a[r]) {
            
            if (checkPalindrome(a, a[l]) || checkPalindrome(a, a[r])) {
                is_kalindrome = true;
            } else {
                is_kalindrome = false;
            }
            break;
        }
        l++;
        r--;
    }
 
    if (is_kalindrome) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
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