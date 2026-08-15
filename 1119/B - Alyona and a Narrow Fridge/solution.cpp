#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long h;
    
    if (!(cin >> n >> h)) return 0;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    int max_k = 0;
    
    // Binary search to find the maximum k
    int low = 1, high = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Take the first 'mid' bottles
        vector<long long> temp(a.begin(), a.begin() + mid);
        
        // Sort in descending order
        sort(temp.rbegin(), temp.rend()); 
        
        long long current_height = 0;
        // Sum the heights of the taller bottle in each pair
        for (int i = 0; i < mid; i += 2) {
            current_height += temp[i];
        }
        
        // Check if the current arrangement fits within the fridge's height
        if (current_height <= h) {
            max_k = mid;     // It fits, save it and try to fit even more
            low = mid + 1;
        } else {
            high = mid - 1;  // It doesn't fit, try fewer bottles
        }
    }
 
    // Output the maximum number of bottles that fit
    cout << max_k << "
";
 
    return 0;
}