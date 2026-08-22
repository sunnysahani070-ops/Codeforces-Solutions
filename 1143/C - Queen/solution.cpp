#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> p(n + 1);
    vector<int> c(n + 1);
    vector<int> can_delete(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> p[i] >> c[i];
        can_delete[i] = c[i];
    }
    for (int i = 1; i <= n; i++) {
        if (p[i] != -1 && c[i] == 0) {
            can_delete[p[i]] = 0;
        }
    }
    
    bool found = false;
    for (int i = 1; i <= n; i++) {
        if (can_delete[i] == 1) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << -1;
    }
    cout << "
";
    
    return 0;
}