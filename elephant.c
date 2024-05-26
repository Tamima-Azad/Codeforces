#include<stdio.h>
int main ()
{
    int o;
    scanf("%d",&o);
    if(o>=1&&o<=pow(10,6)){
    if(o%5!=0){
        printf("%d",(o/5)+1);
    }
    else
    {
        printf("%d",o/5);
    }
    }
    return 0;

}
