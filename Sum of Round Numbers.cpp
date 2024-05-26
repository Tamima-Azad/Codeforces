#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,s=10;cin>>n;
        int a[5];
        for(int i=0;i<5;i++){
            a[i]=n%s;
            n=n-n%s;
            s=10*s;
        }int c=0;
        for(int i=0;i<5;i++){
                if(a[i]!=0)
                c++;
        }
        cout<<c<<endl;
        for(int i=0;i<5;i++)
            if(a[i]!=0) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
