#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    long long d; 
    if (!(cin >> n >> d)) return;
    
    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    sort(p.begin(), p.end());
    
    int i = 0;
    int j = n - 1;
    int win = 0;
    
    while (i <= j) {
        long long c = (d / p[j]) + 1;
        
    
        if (j - i + 1 >= c) {
            win++;
            i += (c - 1); 
            j--;         
        } else {
            break; 
        }
    }
    
    cout << win << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}