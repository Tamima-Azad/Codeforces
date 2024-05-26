#include<stdio.h>
int main()
{
    long long int n,m,a,t,c,r;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n>=1&&m>=1&&a>=1&&n<=1000000000&&m<=1000000000&&a<=1000000000){
        if(n%a==0)
            c=(n/a);
        else
            c=(n/a)+1;
        if(m%a==0)
            r=m/a;
        else
            r=(m/a)+1;
            t=c*r;
            printf("%lld",t);
    }
}
