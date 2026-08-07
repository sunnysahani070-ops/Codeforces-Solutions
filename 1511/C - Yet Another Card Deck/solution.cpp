#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, q;
    cin >> n >> q;
 
    vector<int> first_pos(51, 0);
 
    for (int i = 1; i <= n; ++i) {
        int color;
        cin >> color;
        if (first_pos[color] == 0) {
            first_pos[color] = i;
        }
    }
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
 
        int pos = first_pos[t];
        cout << pos << (i == q - 1 ? "" : " ");
 
        for (int c = 1; c <= 50; ++c) {
            if (first_pos[c] != 0 && first_pos[c] < pos) {
                first_pos[c]++;
            }
        }
        first_pos[t] = 1;
    }
 
    cout << "
";
    return 0;
}