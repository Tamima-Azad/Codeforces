#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   getline(cin,s);
    string ss;
    for(int i=0;i<s.size();i++){
        if(s[i]=='\\'){
            break;
        }
            cout<<s[i];
    }

}
