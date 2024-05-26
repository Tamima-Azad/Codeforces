#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(b<c) printf("%d",a-b);
        else printf("%d",a-c);
    }
    else if(b>a&&b>c){
        if(a>c)printf("%d",b-c);
        else printf("%d",b-a);
    }
    else{
        if(b>a) printf("%d",c-a);
        else printf("%d",c-b);
    }

    return 0;

}
