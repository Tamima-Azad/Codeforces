
// #include<bits/stdc++.h>
// using namespace std;

// void divisor(){
//     long long int n,m; cin>>m>>n;
//     if(n%m==0) cout<<(n/m)*n<<endl;
//     else{
//         long long int p=__gcd(m,n);
//         cout<<(m/p)*n<<endl;
//     }                  
// }
//     signed main(){
//      ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     long long int t; cin>>t;
//     while(t--){
//         divisor();
//     }
//     return 0;
//     }
#include<bits/stdc++.h>
using namespace std;

void divisor(){
    long long int n,m; cin>>m>>n;
    if(n%m==0) cout<<(n/m)*n<<endl;
    else{
        long long int p=__gcd(m,n);
        cout<<(m/p)*n<<endl;
    }                  
}
    signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t; cin>>t;
    while(t--){
        divisor();
    }
    return 0;
}