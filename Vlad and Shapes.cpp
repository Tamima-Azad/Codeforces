#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0,s2=0;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
                int s1=0;
                for(int j=0;j<n;j++){
                    if(s[j]=='1') {s1++;
               c+=s1;}
                }
               s2=s1;
        }
         if(c==s2*s2) {cout<<"SQUARE"<<endl;}
        else
           cout<<"TRIANGLE"<<endl;
        }

}
