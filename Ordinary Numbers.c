#include<stdio.h>
int main()
{
    int t,n,r,o=0,j,a=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j=j*10+a){
            for(int k=1;k<=9;k++){
            if(k<=n){o++;}
            }
            a++;
        }
        printf("%d\n",o);
        o=0;
    }
}
