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
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0;
    for(int i = 1; i <= n; ) {
        int left_pointer = i;
        int right_pointer = i;
        while(right_pointer <= n and a[right_pointer] == a[left_pointer]) right_pointer++;
        int L = left_pointer;
        int R = right_pointer - 1;
        i = right_pointer;
        if((L - 1 < 1 or a[L - 1] > a[L]) and (R + 1 > n or a[R + 1] > a[R])) cnt++;
    }   
    if(cnt == 1) cout << "YES\n";
    else cout << "NO\n";
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