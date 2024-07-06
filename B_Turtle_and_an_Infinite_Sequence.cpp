#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){ 
        ll n, m; cin >> n >> m;
        ll mn, nn = n;
        set<int>s;
        for(int i = m; i>= 0; i--){
            mn = (n|(nn+i));
            n = mn;
            //cout << mn << " ";
            s.insert(mn);
        }
        ll ans;
         for(auto i: s)ans = i;
         cout << ans << endl;
    }
    return 0;
}