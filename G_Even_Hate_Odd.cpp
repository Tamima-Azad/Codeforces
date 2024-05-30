#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            (a[i]%2==0)?e++:o++;
        }
        (n%2)?cout<<-1<<endl:cout<<abs(n/2-o)<<endl;
    }
}