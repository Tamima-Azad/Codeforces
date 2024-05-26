#include<stdio.h>
int main()
{
    int n,m,a,b,s,i,t=1,c,sum;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    for(i=1;i<=n;i++){
        t=t*m;
        if(t<=n){
           c=b*i;
         s=((n-t)*a)+c;
        sum=s;
        }
    }
    printf("%d",sum);
    return 0;

}
