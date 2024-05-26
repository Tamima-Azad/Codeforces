#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            a[i-1]=i;
        }
        int j=0;
        for(int i=n;i>1;i--){
           if(i%2==0) {
            a[j]=i;
           j+=2;}
        }
        for(int i=1;i<n;i+=2){
            a[i]=i;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
