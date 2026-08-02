#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] > s[i + 1]) {
            cout << "YES
";
            cout << (i + 1) << " " << (i + 2) << "
";
            return 0;
        }
    }
 
    cout << "NO
";
    return 0;
}