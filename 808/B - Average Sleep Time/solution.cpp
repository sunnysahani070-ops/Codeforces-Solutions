#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int week = n - k + 1;
    long long w1 = 0;
    
    for(int i = 0; i < k; i++) {
        w1 += a[i];
    }
    
    long long current = w1;
    long long total = current;
    
    for(int i = k; i < n; i++) {
        current += a[i];
        current -= a[i - k];
        total += current;
    }
    
    double avg = (double)total / week;
    
    cout << fixed << setprecision(10) << avg << "
";
    
    return 0;
}