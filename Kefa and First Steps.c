#include<stdio.h>
int main()
{
    int n,a,s=0,k=0,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);

        //if(a==s){k++;}
        //if(a==s){k++;}
        if(a>s){k=i;}
        s=a;
        //b=b+k;

    }
    printf("%d\n",k);
    return 0;
}
