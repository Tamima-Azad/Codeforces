#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
       unsigned long long c=1,c1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c=c*a[i]%m;
        }
        string s;
        cin>>s;
        int b[n],k=1,r=n,p=0,l=0;
        //c=c%m;
        b[0]=c;
        for(int i=0;i<r;i++){
                if(s[i]=='L'){
                p=p+1;}
                else if(s[i]=='R'){
                    n=n-1;
                }c=1;
        for(int j=p;j<n;j++){
           c=c*a[j]%m;
        }
        b[k]=c;
        k++;
        }
        for(int i=0;i<r;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
