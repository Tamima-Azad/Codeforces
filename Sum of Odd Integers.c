#include<stdio.h>
int main()
{
    long long int t,n,k,r=1;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&k);
        if(n%2==0&&k%2==0&&n>=k*k) printf("YES\n");
        else if(n%2!=0&&k%2!=0&&n>=k*k) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
