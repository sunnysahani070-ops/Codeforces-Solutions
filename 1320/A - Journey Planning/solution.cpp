#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    map<int, long long> mpp; 
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = b[i] - i;
    }
    
    long long mx = 0; 
    
    for (int i = 0; i < n; i++) {
        mpp[c[i]] += b[i];
        mx = max(mx, mpp[c[i]]);
    }
    
    cout << mx << "
";
    return 0;
}