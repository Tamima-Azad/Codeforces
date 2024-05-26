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
        int s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        s=s/n;
        int store=0,f=0;
            for(int i=0;i<n;i++){
                    if(a[i]>s) store+=a[i]-s;
                    else if(a[i]<s){
                        if(store>=(s-a[i])){
                           store-=(s-a[i]);
                           }
                           else {
                                  f=1;
                            cout<<"NO"<<endl;
                            break;
                           }
                    }
            }
        if(f==0)
                cout<<"YES"<<endl;

}
}
