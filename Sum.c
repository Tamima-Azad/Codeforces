#include<stdio.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a, &b, &c);
        if(a+b==c||b+c==a||c+a==b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
