#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        string s; cin>>s;
        char a[26]={0};
        for(int i=0;i<s.size();i++){
            a[s[i]-'A']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(a[i]!=0) cnt++;
        }
        cout<<n+cnt<<endl;
    }
}