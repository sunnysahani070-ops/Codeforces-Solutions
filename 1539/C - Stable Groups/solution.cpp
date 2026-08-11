#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long k, x;
    if (!(cin >> n >> k >> x)) return 0;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    vector<long long> gaps;
    for (int i = 1; i < n; ++i) {
        long long diff = a[i] - a[i - 1];
        if (diff > x) {
            long long needed = (diff - 1) / x;
            gaps.push_back(needed);
        }
    }
    long long groups = gaps.size() + 1;
 
    sort(gaps.begin(), gaps.end());
 
    for (long long needed : gaps) {
        if (k >= needed) {
            k -= needed;
            groups--;
        } else {
            break;
        }
    }
 
    cout << groups << "
";
 
    return 0;
}