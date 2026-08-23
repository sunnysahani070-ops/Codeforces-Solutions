#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long ops = 0;
    long long x = 0;
    int i = 0;
    int j = n - 1;
    
    while (i <= j) {
        if (i == j) {
            if (x >= a[i]) {
                ops += 1;
            } else {
               
                long long rem = a[i] - x;
                long long k = (rem + 1) / 2; 
                ops += min(k + 1, a[i]);   
            }
            break;
        }
        
        long long need = a[j] - x;
        if (a[i] < need) {
            x += a[i];
            ops += a[i];
            a[i] = 0;
            i++;
        } 
        else if (a[i] == need) {
            x += a[i];
            ops += a[i];
            a[i] = 0;
            i++;
            ops++; 
            x = 0;
            a[j] = 0;
            j--;
        } 
        else {
            a[i] -= need;
            x += need;
            ops += need;
            ops++; 
            x = 0;
            a[j] = 0;
            j--;
        }
    }
    cout << ops << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}