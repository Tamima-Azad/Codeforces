#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n;i++){
        if(a[i]=='B'){
            f=i;
            break;
        }
    }
    int c=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]=='B'){
            c=i;
            break;
        }
    }
    cout<<c-f+1<<endl;
    }
}
