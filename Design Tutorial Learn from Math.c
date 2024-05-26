#include<stdio.h>
int main()
{
    int n,a,b,i=2;
    scanf("%d",&n);
    for(i;i<n;i++){
        a=n-i;
        if(a>3&&i>3){
            break;
        }

    } printf("%d %d",a,i);

    return 0;
}
