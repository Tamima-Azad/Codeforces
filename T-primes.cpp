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
signed main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int &l=*max_element(a,a+n);
    cout<<l<<endl;
    vector<int>v;
    int cnt=0,k=0;
    for(int i=2;i<=l;i++){
        if(a[k]%i==0) cnt++;
        if(a[k]==i) {
            i=2;
            k++;
            v.push_back(cnt);
        }
        if(k==n) break;
    }
    for(int i=0;i<n;i++){
        if(v[i]==2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
