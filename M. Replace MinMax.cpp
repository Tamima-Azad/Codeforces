#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=0,m=9999999,s=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx){ mx=a[i];
        c=i;}
        if(a[i]<m){
            m=a[i];
        s=i;}
    }
    swap(a[s],a[c]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";}
}
