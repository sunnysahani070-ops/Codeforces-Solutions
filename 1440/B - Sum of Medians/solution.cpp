#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    int total_elements = n * k;
    vector<long long> a(total_elements);
    for (int i = 0; i < total_elements; ++i) {
        cin >> a[i];
    }
    int elements_to_right = n - (n + 1) / 2;
    
    long long sum_medians = 0;
    int current_index = total_elements - elements_to_right - 1;
    
    for (int i = 0; i < k; ++i) {
        sum_medians += a[current_index];
        current_index -= (elements_to_right + 1);
    }
    
    cout << sum_medians << "
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