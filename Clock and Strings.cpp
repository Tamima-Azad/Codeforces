#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b,c,d,temp=0;
        cin >> a >> b >> c >> d;
        if(a<10)a+=12;
        if(b<10)b+=12;
        if(c<10)c+=12;
        if(d<10)d+=12;
        if(a>b) {temp=a;a=b;b=temp;}
        if(c>d) {temp=c;c=d;d=temp;}
        if((c<a&&d>b)||(a<c&&b>d)||(c>b)||(d<a)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t,i=0; cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a<10)a+=12;
        if(b<10)b+=12;
        if(c<10)c+=12;
        if(d<10)d+=12;
        //cout << a << " " << b << " " << c << " " << d << endl;
        if(a>b)swap(a,b);
        if(c>d)swap(c,d);
        if ((c < a && d > b) || (c > a && d < b) || (c > b) || (d < a))cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}*/
