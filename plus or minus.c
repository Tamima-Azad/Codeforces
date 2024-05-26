#include<stdio.h>
int main()
{
    int i,t,a,b,c;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c){
            printf("+\n");
        }
        if(a-b==c){
            printf("-\n");
        }
    }
    return 0;
}
