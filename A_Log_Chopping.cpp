#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=(a[i]-1);
    }
    if(s%2==0) cout<<"maomao90"<<endl;
    else cout<<"errorgorn"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}