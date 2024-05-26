#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a[0],a[n-1]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int s=0;
    for(int i=0;i<n-1;i++){
        s+=(a[i+1]-a[i]);
    }
    cout<<s<<endl;
    }
    return 0;
}

