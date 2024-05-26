#include<stdio.h>
int main()
{
    int t,b,c,h;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        scanf("%d %d %d",&b,&c,&h);
        if(c+h>=b) printf("%d\n",b*2-1);
        else if(c+h<b) printf("%d\n",(c+h)*2+1);
    }
    return 0;
}
