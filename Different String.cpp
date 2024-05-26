#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        int l=s.size(),f=0,j=0;
        s[l+1]='\0';
        char ss=s[0];
        for(int i=1;i<l;i++){
            if(s[i]==ss){
                continue;
            }
            else{
                f=1;
                j=i;
                break;
            }
        }
        swap(s[0],s[j]);
        if(f==0) cout<<"NO"<<endl;
        else cout<<"YES\n"<<s<<endl;
    }
}
