#include<stdio.h>
int main ()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)){
        scanf("%d",&n);
        if(n>=1900){
            printf("Division 1");
            else if(n>=1600&&n<=1899)
                printf("Division 2");
            else if(n>=1400&&n<=1599)
                printf("Division 3");
            else if(n<=1399)
                printf("Division 4");
        }
    }
    return 0;
}
