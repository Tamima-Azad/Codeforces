#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    int cnt=0,f=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0' and s[i+1]=='1'){
            f=1;
        }
        if(s[i]!=s[i+1]){
            cnt++;
        }

    }
    cout<<cnt+1-f<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
   return 0;
}