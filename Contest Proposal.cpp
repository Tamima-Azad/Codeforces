#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(b[i]<a[i]){
            for(int j=n;j>i;j--){
            a[j-1]=a[j-2];
            }
            a[i]=b[i];
            c++;
    }
    }
    cout<<c<<endl;
}
}
