#include<stdio.h>
int main()
{
    int t,k,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&k);
        if(k%3!=0&&k%10!=3){
            printf("%d\n",k);
        }
    }
}
