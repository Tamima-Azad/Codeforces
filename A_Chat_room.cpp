#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;cin>>s;
    vector<char>v;
    int l=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
            l=i;
        cnt++;
        break;
        }
    }
    for(int i=l+1;i<s.size();i++){
        if(s[i]=='e'){
            l=i;
            cnt++;
            break;
        }
    }
    for(int i=l+1;i<s.size();i++){
        if(s[i]=='l'){
            l=i;
            cnt++;
            break;
        }
    }
    for(int i=l+1;i<s.size();i++){
        if(s[i]=='l'){
            l=i;
            cnt++;
            break;
        }
    }
    for(int i=l+1;i<s.size();i++){
        if(s[i]=='o'){
            l=i;cnt++;break;
        }
    }
    if(cnt==5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}