#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        string ss=s;
        sort(s.begin(),s.end());
        (s==ss)?cout<<"YES"<<endl:
        cout<<"NO"<<endl;
    }
}
