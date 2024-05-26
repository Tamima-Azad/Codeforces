#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    if(t%2==0)
    {
        printf("%lld",t/2);
    }
    else
    {
        printf("%lld",-(t+1)/2);
    }
    return 0;

}
