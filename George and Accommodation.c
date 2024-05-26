#include<stdio.h>
int main()
{
    int n,p,q,i,a=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&p,&q);
        if(p<=q-2){ a++; }
        b=a;
    }
    printf("%d",b);
    return 0;
}
