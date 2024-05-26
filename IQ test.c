#include<stdio.h>
int main()
{
    int n,x=0,m=0,y=1,p=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2!=0){
            p++;
            x=i;
        }
        else if(a%2==0){
            y=i;
        }

    }

   if(p==1) printf("%d",x);
   else printf("%d",y);
   return 0;
}
