#include<stdio.h>
int main()
{
    int n,m=0,s=0,ms=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++)
        {

        if(a[i]>m)
        {
            m=a[i];
        }
        }
        for(int j=0;j<n;j++)
        {
            s=m-a[j];
            ms=ms+s;

        }
    printf("%d",ms);
    return 0;
}
