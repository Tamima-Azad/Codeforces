#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,s=0,e=0,o=0;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
           int a;
            scanf("%d",&a);
            s+=a;
            if(a%2==0) e++;
            else o++;
        }
        if(s%2!=0) printf("YES\n");
        else{
            if(e==0||o==0) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}
