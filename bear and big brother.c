#include<stdio.h>
int main()
{
    int al,bb,a,b,n=0;
    scanf("%d %d",&al,&bb);
    if(al>=1&&al<=bb&&bb<=10){
        while(al<=bb){
            al=al*3;
            bb=bb*2;
            n++;
        }
        printf("%d",n);
    }
    return 0;
}
