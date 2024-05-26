#include<stdio.h>
int main()
{
    int t,h,m,y;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&h,&m);
        y=(24-h)*60-m;
        printf("%d\n",y);
    }

    return 0;
}
