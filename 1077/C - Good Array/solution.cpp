#include <iostream>
#include <vector>
 
using namespace std;
 
const int MAXA = 1000005;
int count_map[MAXA];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<long long> a(n);
    long long total_sum = 0;
 
   
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
        count_map[a[i]]++;
    }
 
    vector<int> nice_indices;
 
    for (int i = 0; i < n; ++i) {
        long long rem_sum = total_sum - a[i];
 
        
        if (rem_sum % 2 == 0) {
            long long target = rem_sum / 2;
            
            
            if (target >= 0 && target < MAXA) {
                
                if (target == a[i]) {
                    if (count_map[target] > 1) {
                        nice_indices.push_back(i + 1);
                    }
                }
                else {
                    if (count_map[target] > 0) {
                        nice_indices.push_back(i + 1);
                    }
                }
            }
        }
    }
 
    cout << nice_indices.size() << "
";
    for (int i = 0; i < nice_indices.size(); ++i) {
        cout << nice_indices[i] << (i == nice_indices.size() - 1 ? "" : " ");
    }
    cout << "
";
 
    return 0;
}