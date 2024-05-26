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
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%3==0) cout<<"0"<<endl;
        else {
                int m=0;
            for(int i=0;i<n;i++){
                if((s-a[i])%3==0){
                    s-=a[i];
                        m=i;
                break;}
                else if ((s-a[n-i-1])%3==0){
                    s-=a[n-1-i];
                    m=i;
                break;}
            }
            cout<<m+1<<endl;
        }
    }
}

