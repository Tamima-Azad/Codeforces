#include<stdio.h>
int main()
{
    int t,i,a,b,c=0,d,s=0,j,k,x;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&a);
            b=a%100;
            a=a/100;
            x=a%100;
            a=a/100;

        for(j=1;j<=3;j++){
            c=c+(b%10);
            b=b/10;
        }
        for(k=1;k<=3;k++){
            s=s+(x%10);
            x=x/10;
        }
        if(c==s) printf("YES\n");
    else printf("NO\n");
        }

return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        n=n/10;
        e=n%10;
        n=n/10;
        f=n%10;
        n=n/10;
        if(a+b+c==d+e+f){ printf("YES\n"); }
    else { printf("NO\n"); }

    }
    return 0;

}*/












