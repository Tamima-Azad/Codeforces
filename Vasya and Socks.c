#include<stdio.h>
int main()
{
    int n,m,p=0,d=0,s=0;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        for(int i=n;i>=1;i=i/m)
        {
            if(i>=m){s=s+i+i%m;}


        }
        printf("%d\n",s);

    }
    else if(n==m)printf("%d\n",n+1);
    else printf("%d\n",n);
    return 0;
}
