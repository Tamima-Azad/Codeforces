#include<stdio.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
            if(a+b>=10) printf("YES\n");
            else if(b+c>=10) printf("YES\n");
            else if(a+c>=10) printf("YES\n");
            else printf("NO\n");

    }
    return 0;
}
