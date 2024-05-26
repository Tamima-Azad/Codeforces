#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; string s; cin >>n>>s;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
       for(int i=0;i<n;i++){
        if(s[i]=='T') c1++;
        else if(s[i]=='i') c2++;
        else if(s[i]=='m') c3++;
        else if(s[i]=='u') c4++;
        else if(s[i]=='r') c5++;
       }
       if(c1==1&&c2==1&&c3==1&&c4==1&&c5==1&&n==5)
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
