#include<stdio.h>
int main()
{
    int n,k,a,b=0,c=0,s=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(i<k&&a>0){ b=b+1;}
            if(k==i&&a>0) {b=b+1;s=s+a;}

                if(i>k&&a>0&&s<=a){
                        b=b+1;}

    }
        printf("%d",b);
        return 0;
}
/*#include<stdio.h>
int main()
{
    int n,k,i,a,sum=0,b,x;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d ",&a);
        if(i<k&&a>0){
            sum=sum+1;
        }
        if(k==i&&a>0){
            sum=sum+1;
            b=a+1;
        }
        if(i>k&&a>0){
            x=b-a;
            if(x==1){
                sum=sum+1;
            }
        }
    }
    printf("%d",sum);
return 0;
}*/
