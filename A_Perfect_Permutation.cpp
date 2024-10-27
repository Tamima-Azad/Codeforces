#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>p(n+1);
    if(n%2)cout<<-1<<endl;
    else {
        for(int i=1;i<=n;i++){
            p[i]=i;
        }
        for(int i=1;i<=n;i+=2){
            swap(p[i],p[i+1]);
        }
        for(int i=1;i<=n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}