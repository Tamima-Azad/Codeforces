#include<stdio.h>
int main()
{
    int n,k,d=0,a=5,i,s=0,b=0;
    scanf("%d %d",&n,&k);
    d=240-k;
    for(i=1;i<=n;i++)
    {
        s=s+a*i;
        if(s<=d) {b++;}
    }
    printf("%d",b);
    return 0;
}
