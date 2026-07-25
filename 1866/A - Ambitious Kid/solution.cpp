#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int min_ops = 2e9; 
 
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        min_ops = min(min_ops, abs(a));
    }
 
    cout << min_ops << "
";
 
    return 0;
}