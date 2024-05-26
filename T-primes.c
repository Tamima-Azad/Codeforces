#include<stdio.h>
int main()
{
    long long int n,a,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
            if(a%j==0){ c++; }
        }
        if(c==3) printf("YES\n");
        else printf("NO\n");
        c=0;
    }
    return 0;
}
