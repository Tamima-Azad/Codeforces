#include<stdio.h>
int main()
{
    int t,n,i,j,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n%2!=0)
            printf("%d\n",n/2);
        if(n%2==0)
            printf("%d\n",(n/2)-1);
        }
}
