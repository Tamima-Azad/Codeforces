#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n-1];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        int b[n];
        b[0]=502;
        for(int i=1;i<n;i++){
           b[i]=(b[i-1])+a[i-1];
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
}
}
