#include<stdio.h>
int main()
{
    int t,s=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,a;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(a==j){s++;}
        }
        if(s%2==0)printf("%d\n",s/2);
        else printf("%d\n",s/2+1);
        s=0;
    }
    return 0;
}
