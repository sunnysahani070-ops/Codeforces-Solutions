#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
 
 
using namespace std;
 
void drip() {
    int nox;
    cin>>nox;
    vector<int> aox(nox);
    for(int i=0;i<nox;i++){
        cin>>aox[i];
    }
    if(nox==1){
        cout<<aox[0]<<"
";
    }else{
        cout<<gcd(aox[0],aox[nox-1])<<"
";
    }
    
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int toxic;
    cin >> toxic; 
    
    while (toxic--) {
        drip();
    }
    
    return 0;
}