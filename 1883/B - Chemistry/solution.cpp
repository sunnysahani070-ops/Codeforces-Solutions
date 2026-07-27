#include <iostream>
#include <set>
#include <vector>
 
using namespace std;
 
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int f[26]={0};
    for(int i=0;i<n;i++){
        f[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(f[i]%2==1){
            count++;
        }
    } 
    if (count - 1 <= k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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