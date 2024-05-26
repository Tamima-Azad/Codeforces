#include<stdio.h>
int main()
{
    int i,a,b,n,c;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(0<=a&&0<=b&&a<=9&&b<=9)
        printf("%d\n",a+b);
    }


    return 0;
}
