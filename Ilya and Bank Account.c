#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0) printf("%d",n);
    else {
            int a=0,b=0,c=0,d=0;
            a=n%10;
            b=n/10;
            c=b%10;
            d=b/10;
            if(a<c) printf("%d",b);
            else printf("%d",d*10+a);
}
return 0;
}
