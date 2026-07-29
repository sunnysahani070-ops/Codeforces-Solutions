#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> mins;
    vector<long long> second_mins;
    long long absolute_min = 2e9;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<long long> a(m);
        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }
        
        sort(a.begin(), a.end());
        mins.push_back(a[0]);
        second_mins.push_back(a[1]);
        absolute_min = min(absolute_min, a[0]);
    }
    
    long long total_beauty = 0;
    long long min_second = 2e9;
    
    for (int i = 0; i < n; i++) {
        total_beauty += second_mins[i];
        min_second = min(min_second, second_mins[i]);
    }
    
    total_beauty = total_beauty - min_second + absolute_min;
    
    cout << total_beauty << "
";
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