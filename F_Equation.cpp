//#include<bits/std++.h>
#include<iostream>
using namespace std;
long long int equation(long long int x,long long int n){
    long long int s=0,m=1;
    for(int i=1;i<=n;i=i+1){
        m*=x;
        if(i%2==0)
        s+=m;
    }
    return s;
}
signed int  main(){
    long long int x,n; cin>>x>>n;
    cout<<equation(x,n)<<endl;
}