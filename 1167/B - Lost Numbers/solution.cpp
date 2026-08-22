#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    vector<int> a = {4, 8, 15, 16, 23, 42};
    int p1, p2, p3, p4;
 
    cout << "? 1 2" << endl;
    cin >> p1;
 
    cout << "? 2 3" << endl;
    cin >> p2;
 
    cout << "? 4 5" << endl;
    cin >> p3;
 
    cout << "? 5 6" << endl;
    cin >> p4;
 
    do {
        if (a[0] * a[1] == p1 && 
            a[1] * a[2] == p2 && 
            a[3] * a[4] == p3 && 
            a[4] * a[5] == p4) {
            
            break;
        }
    } while (next_permutation(a.begin(), a.end()));
 
    cout << "!";
    for (int i = 0; i < 6; i++) {
        cout << " " << a[i];
    }
    cout << endl;
 
    return 0;
}