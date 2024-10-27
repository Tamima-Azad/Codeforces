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

const int maxN=1009;
int dx[8]={1,0,-1,0,-1,1,-1,1};
int dy[8]={0,1,0,-1,-1,1,1,-1};
bool visited[maxN][maxN];
int n;
bool isValid(int x,int y){
    return(x<=n&&x>=1&&y<=n&&y>=1);
}
void bfs(int kx,int ky){
    queue<pair<int,int>>q;
    q.push({kx,ky});
    visited[kx][ky]=true;
    while(!q.empty()){
        auto[x,y]=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int DX,DY;
            DX=dx[i]+x;
            DY=dy[i]+y;
            if(!visited[DX][DY] && isValid(DX,DY)){
                visited[DX][DY]=true;
                q.push({DX,DY});
            }
        }
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int qx,qy,kx,ky,tx,ty;
    cin>>n;
    cin>>qx>>qy;
    cin>>kx>>ky;
    cin>>tx>>ty;
    for(int i=0;i<8;i++){
        int DX,DY;
        DX=dx[i]+qx;
        DY=dy[i]+qy;
        while(isValid(DX,DY)){
            visited[DX][DY]=true;
            DX+=dx[i];
            DY+=dy[i];
        }
    }
    bfs(kx,ky);
    if(visited[tx][ty]){
        cout<<"YES"<<endl;
    }
    else{ cout<<"NO"<<endl;}
    return 0;
}