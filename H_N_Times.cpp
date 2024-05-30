#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; char a;
        cin>>n>>a;
        // string s(n,a);
        // for(char c:s){
        //     cout<<c<<" ";
        // }
        for(int i=1;i<=n;i++){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}