#include<stdio.h>
int main()
{
    int t,n,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a%2!=0) { x++;}
        }
        if(x%2==0) printf("YES\n");
        else printf("NO\n");
        x=0;

    }
    return 0;
}
