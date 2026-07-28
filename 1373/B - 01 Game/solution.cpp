#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt0++;
        }else{
            cnt1++;
        }
    }
    int c=min(cnt0,cnt1);
    if(c%2==1){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
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