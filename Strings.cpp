#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    cout<<s.size()<<" "<<ss.size()<<endl;
    cout<<s+ss<<endl;
    swap(s[0],ss[0]);
    cout<<s<<" "<<ss<<endl;
}
