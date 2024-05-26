/*#include<stdio.h>
int main()
{
    int r,b;
    scanf("%d %d",&r,&b);
    if(r<=100&&b<=100&&r>=1&&r>=1){
        if(r>b&&(r-b)%2==0){
            printf("%d %d",b,(r-b)/2);
        }
        else if(b>r&&(b-r)%2==0){
            printf("%d %d",r,(b-r)/2);
        }
        else if (r>b&&(r-b)%2!=0){
            printf("%d %d",b,(r-b)/2);
        }
        else if(b>r&&(b-r)%2!=0){
            printf("%d %d",r,(b-r)/2);
        }
        else if(r==b){
            printf("%d %d",r,(r-b)/2);
        }

    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int b,r;
    scanf("%d %d",&b,&r);
    if(r<=100&&b<=100&&r>=1&&b>=1)
    {
        if(r>=b)
            printf("%d %d",b,(r-b)/2);
        else
            printf("%d %d",r,(b-r)/2);
    }
    return 0;
}
