#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        pos[b] = i;
    }
    
    int fines = 0;
    int max_pos = -1;
    
    for (int i = 0; i < n; i++) {
        int current_pos = pos[a[i]];
        if (current_pos < max_pos) {
            fines++;
        } else {
            max_pos = current_pos;
        }
    }
    
    cout << fines << "
";
    
    return 0;
}