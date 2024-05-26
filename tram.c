#include<stdio.h>
int main()
{
    int i,n,a,b,s=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        s=(s+b)-a;
        if(s>c)
            c=s;

    }
    printf("%d",c);
}
