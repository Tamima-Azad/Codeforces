#include<stdio.h>
int main()
{
    int t,x,k;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&k);
        if(x%k==0) {
            printf("2\n");
            printf("%d %d\n",x-1,1);
        }
        else {
            printf("1\n");
        printf("%d\n",x);

    }
    }
    return 0;

}
