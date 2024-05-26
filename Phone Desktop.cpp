#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(x==0&&y==0)cout<<"0"<<endl;
        else if(y==0) cout<<"1"<<endl;
        else if((x!=0&&y!=0)&&x%2==0&&y%2==0) cout<<"2"<<endl;
        else{
            cout<<(y/2)+(y%2)<<endl;
        }
    }
}
