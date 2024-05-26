#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int xx=max(0,(x-a));
        int yy=max(0,(y-b));
        if(max(0,(xx+yy-c))==0) cout<<"YES\n"<<endl;
        else cout<<"NO\n"<<endl;
    }
}



