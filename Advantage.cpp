#include<bits/stdc++.h>
using namespace std;
void solve(){

    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        int a[n + 5],ca[n+5];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            ca[i]=a[i];
        }
        sort(ca+1,ca+n+1);
        int first_highest=ca[n];
        int second_highest=ca[n-1];
        for(int i=1;i<=n;i++){
            if(a[i]==first_highest)
                cout<<a[i]-second_highest<<" ";
            else cout<<a[i]-first_highest<<" ";
        }
         cout<<endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
