#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,a,b,c,d,p,q,r,s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b){ p=a;q=b; }
        else { p=b;q=a ;}
        if(c>d){ r=c;s=d; }
        else {r=d;s=c;}

if(p>s&&r>q) printf("YES\n");
else printf("NO\n");

    }
    return 0;
}
