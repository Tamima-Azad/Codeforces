#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int start=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                    break;
            }
            start=i;
        }int End=0;
        for(int i=n-1;i>=0;i--){
         if(a[i]==0) break;
         End=i;
        }
        cout<<max(0,(End-start))<<endl;
    }
    return 0;
}
