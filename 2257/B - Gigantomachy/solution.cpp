#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    if(a[0] + n - 1>=b[0] + m - 1){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}