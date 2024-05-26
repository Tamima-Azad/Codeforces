#include<stdio.h>
int main()
{
    int t,a,b,c,d,x=0;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<b){x++;}
        if(a<c){x++;}
        if(a<d){x++;}
         printf("%d\n",x);
         x=0;
    }
    return 0;

}
