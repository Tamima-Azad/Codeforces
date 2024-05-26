#include<stdio.h>
int main()
{
    int t,n,a[100000],s=0,b=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++)
        {
            if(a[j+1]>=a[j]){
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=s;
                b++;
            }
        }
        printf("%d\n",b-1);
        b=0;
    }
    return 0;
}
