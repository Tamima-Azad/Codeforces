#include<stdio.h>
int main()
{
    int n,m,c,i,d=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&m,&c);
        if(m>c){
            b+=1;
        }
        else if(c>m){
            d+=1;
        }
    }
    if(b>d) printf("Mishka");
    else if(d>b) printf("Chris");
    else printf("Friendship is magic!^^");
    return 0;
}
