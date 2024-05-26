#include<stdio.h>
int main()
{
   long long int i,n,j,x=0;
   int t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        for(j=3;j<=n;j+=2){
            if(n%j==0){
             x=1;break;
             }
    }
    if(x==1)printf("YES\n");
        else printf("NO\n");
        x=0;
}
 return 0;
}
