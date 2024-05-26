#include<stdio.h>
int main()
{
    int n,a,b,p,q;
    scanf("%d %d %d",&n,&a,&b);
    if(a>=0&&b>=0&&a<n&&b<n&&n<=100)
    {
       p=n-a;
       q=b+1;
       if(p<=q) printf("%d",p);
       else printf("%d",q);
    }

    return 0;
}
