#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>s;
        char a[5];
        while(n--){
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        for(int i=0;i<4;i++){
            if(a[i]=='#'){
            s.push_back(i+1);
            }
        }
        }
        reverse(s.begin(),s.end());
        for(auto i:s){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
}