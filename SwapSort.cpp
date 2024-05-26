#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0 ;i<n ;i++){
        cin>>a[i];
    }int c=0;
    vector<pair<int,int>>p;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){ min=j; }
        }
            if(min!=i) {swap(a[i],a[min]); c++;
            //cout<<i<<" "<<min<<endl;}
            p.push_back(make_pair(i,min));}
        
    }
    cout<<c<<endl;
    for(int i=0;i<c;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
