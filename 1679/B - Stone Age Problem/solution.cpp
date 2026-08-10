#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, q;
    if (!(cin >> n >> q)) return 0;
 
    vector<long long> a(n + 1);
    vector<int> last_element_time(n + 1, 0);
    long long total_sum = 0;
 
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
 
    long long last_global_val = 0;
    int last_global_time = 0;
 
    for (int query_time = 1; query_time <= q; ++query_time) {
        int type;
        cin >> type;
 
        if (type == 1) {
            int i;
            long long x;
            cin >> i >> x;
 
            
            if (last_element_time[i] < last_global_time) {
                a[i] = last_global_val;
            }
 
            total_sum += (x - a[i]);
            a[i] = x;
            last_element_time[i] = query_time;
 
        } else if (type == 2) {
            long long x;
            cin >> x;
 
            last_global_val = x;
            last_global_time = query_time;
            total_sum = (long long)n * x;
        }
 
        cout << total_sum << "
";
    }
 
    return 0;
}