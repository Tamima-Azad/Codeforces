#include<stdio.h>
int main()
{
    int k,n,w,i=1,k1,s=0;
    scanf("%d %d %d",&k,&n,&w);
    while(i<=w){
        k1=k*i;
        i++;
        s=s+k1;
    }
    if(s>n)
    printf("%d",s-n);
    else
        printf("0");
    return 0;
}
