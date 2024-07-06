#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define lastone(n) ((n) & (-(n))) 
char gap = 32;
#define int long long
#define ll long long 
#define lll __int128_t
#define pb push_back
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;
void solve() {
    int n,f,k; cin >> n >> f >> k;
    int a[n],h1=0,h=0,flag=0,flag1=0;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       // v[i]=a[i];
        }  h=a[f-1];
        int p=0;
         sort(a,a+n,greater<int>());
    for(int i=0;i<k;i++){
        if(a[i]==h){
            flag=1;
            p=i;
            break;
        }
    }
   // a[p]=;
   int q=0;
   
    for(int i=p+1;i<k+p;i++){
        if(a[i]==h){
            flag1=1;
            q=i;
        }
    }
    if(flag==1&&flag1==0){
        cout<<"YES"<<endl;
    }
    else if(flag==0&&flag1==0)cout<<"NO"<<endl;
    else cout<<"MAYBE"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}