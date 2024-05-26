#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int aa; cin>>aa;
        v.push_back(aa);
    }int c=0;
    for(int i=0;i<n;i++){
        if(v[i]<=(5-k))c++;
    }
    cout<<c/3<<endl;
    return 0;
}
