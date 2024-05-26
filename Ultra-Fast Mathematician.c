#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s=0,r=0;
    scanf("%d %d",&a,&b);
   while(a!=0||b!=0)
    {
        s=s+a%10+b%10+r;
        r=s%2;
        a/=10;
        b/=10;

        printf("%d",s);
    }


    return 0;

}
