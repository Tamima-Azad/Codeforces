#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int d=4*n-2;
        int c=0;
        if((n*2)>=k){
            if(k%2==0){
                c=(k/2);}
        else
            c=(k/2)+1;}
        else if(k>(n*2)) {
                if(k%2==0){
                c=((k-(n*2))/2)+(k-n*2);}
        else
        c=((k-(n*2))/2)+(k-n*2)+1;}
        cout<<c<<endl;

    }
}
