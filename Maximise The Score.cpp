#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+(2*n));
        long long int m=0,s=0;
        for(int i=0;i<2*n;){
            if(a[i]<a[i+1]) m=a[i];
            else m=a[i+1];
            i+=2;
            s+=m;
        }
        cout<<s<<endl;
    }
}
