#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum+= arr[i];
        }
        if(sum%n!=0){
            cout<<"-1"<<endl;
        }else{
            int avg=sum/n;
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]>avg) c++;
            }
              cout<<c<<endl;
        }

    }
}
