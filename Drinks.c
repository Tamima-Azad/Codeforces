#include<stdio.h>
int main()
{
    int t,n,i,s=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=s+n;
    }

    printf("%lf",(double)s/t);
    return 0;
}
