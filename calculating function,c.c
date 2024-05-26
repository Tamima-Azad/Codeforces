/*#include<stdio.h>
int main()
{
    long long int t,i=1,n,s=0;
    scanf("%lld",&n);
    if(n>=1&&n<=pow(10,15)){
    while(i<=n){

        t=pow((-1),i)*i;
        s=s+t;
        i++;
    }
    }
    printf("%lld",s);
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
     long long int n,sum=0;
    scanf("%lld",&n);
        sum=(n/2)-(n%2)*n;
    printf("%lld",sum);

return 0;
}*/

#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
if(a>=1 && a<=10^15)
{
    if(a%2==0)
    {
    printf("%lld",(a/2+a%2));
    }
    else
    {
    printf("%lld",-(a/2+a%2));
    }
}
else
{
    printf("");
}
    return 0;
}
