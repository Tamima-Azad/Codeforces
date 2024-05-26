#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]=='@'){
                c++;
            }
            else if((a[i]=='*'&&a[i+1]=='*'))
                break;
        }
        cout<<c<<endl;
    }
}
