#include<stdio.h>
int main()
{
    int n,n1,n5,n10,n20,n100;
    n1=n5=n10=n20=n100=0;
    int t;
    scanf("%d",&n);
    if(n>=1&&n<=1000000000){
        if(n>=100){
            n100=n/100;
            n=n%100;

        }
        if(n>=20){
            n20=n/20;
            n=n%20;
        }
        if(n>=10){
            n10=n/10;
            n=n%10;
        }
        if(n>=5){
            n5=n/5;
        n=n%5;
        }
        if(n>=1){
            n1=n*1;
        }
        t=n100+n20+n10+n5+n1;
        printf("%d",t);
    }
    return 0;
}
