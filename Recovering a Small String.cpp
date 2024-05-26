#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    while(t--){
        cin>>a;
        if(a>=3&&a<=27) {
           printf("aa%c\n",97+a-3);
        }
        else if(a>26&&a<=52){
           printf("a%cz\n",97+a-28);
        }
        else if(a>52&&a<=78){
           printf("%czz\n",97+a-53);
        }
    }
    return 0;
}
