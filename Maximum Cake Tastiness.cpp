#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
            int n; cin>>n;
        vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mx=a.back();
    a.pop_back();
    int mxx=a.back();
    cout<<mxx+mx<<endl;
    }
}
