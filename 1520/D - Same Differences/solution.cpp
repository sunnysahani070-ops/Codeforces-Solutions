#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    map<int, long long> freq;
    long long count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // Rearranging a[j] - a[i] = j - i  =>  a[j] - j = a[i] - i
        int key = a[i] - i;
        
        // Add the number of previous occurrences of this key
        count += freq[key];
        
        // Increment the frequency of the current key
        freq[key]++;
    }
    
    cout << count << "
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