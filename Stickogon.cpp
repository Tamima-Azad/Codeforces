#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> frequency;
    for(int i=0;i<n;i++){
        frequency[ a[i]]++;
    }
    int c=0;
    for(auto&i:frequency){
        if(i.second >=3) c+=i.second/3;
        cout<<c<<" "<<i.second<<endl;
    }
    cout<<c<<endl;
   }
   return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++){
            cin >> ar[i];
        }
        map<int,int>m;
        for(auto &i: ar){
            m[i]++;

        }int c = 0;
        for(auto i : m){
            if(i.second>=3){
                c+=i.second/3;
            }
        }
        cout << c << endl;
        }
    return 0;
}
*/
