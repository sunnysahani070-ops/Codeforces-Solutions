#include <iostream>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    long long W;
    cin >> n >> W;
 
    multiset<int> widths;
    for (int i = 0; i < n; ++i) {
        int w;
        cin >> w;
        widths.insert(w); // multiset keeps elements sorted automatically
    }
 
    int height = 1;
    long long current_space = W;
 
    // Continue until all rectangles are placed
    while (!widths.empty()) {
        // Find the first element strictly greater than current_space
        auto it = widths.upper_bound(current_space);
        
        if (it != widths.begin()) {
            // If it's not the beginning, we can step back by one to get 
            // the largest element that is <= current_space
            --it;
            current_space -= *it; // Deduct the width from available space
            widths.erase(it);     // Remove the used rectangle
        } else {
            // No available rectangle can fit in the remaining space.
            // Start a new row.
            height++;
            current_space = W;
        }
    }
 
    cout << height << "
";
}
 
int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}