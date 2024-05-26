#include<stdio.h>
int main()
{
    int n,c,s=0,i;
    scanf("%d",&n);
    for(i=1;;i++){
        for(int j=1;j<=i;j++){
            s=s+j;

        }
        if(s>n)break;
    }
    printf("%d",i-1);
    return 0;
}
