#include<bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
        int n,c1=0,c2=0;cin >>n;
        vector<int>a(n);
        for(auto& i : a){
           cin>>i;
           if(i==1) c1++;
           else c2++;
        }
        if(c1%2==0&&c2%2==0) cout<<"YES"<<endl;
        else if(c1)
        for(auto& i : a){
            cout<<i<<" ";
        }
    }
    return 0;
}
