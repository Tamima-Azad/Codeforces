
#include<stdio.h>
int main()
{
    int a,b,c,m1,m2,m3,m4,m5,m6;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=1&&b>=1&&c>=1&&a<=10&&b<=10&&c<=10){
    m1=a+b+c;
    m2=a*b*c;
    m3=(a+b)*c;
    m4=a*(b+c);
    m5=(a*b)+c;
    m6=a+(b*c);
    if(m1>=m2&&m1>=m3&&m1>=m4&&m1>=m5&&m1>=m6){
        printf("%d",m1);
    }else if(m2>=m1&&m2>=m3&&m2>=m4&&m2>=m5&&m2>=m6){
        printf("%d",m2); }
    else if(m3>=m1&&m3>=m2&&m3>=m4&&m3>=m5&&m3>=m6){
        printf("%d",m3);
    }
    else if(m4>=m1&&m4>=m2&&m4>=m3&&m4>=m5&&m4>=m6){
        printf("%d",m4);
    }
    else if(m5>=m1&&m5>=m2&&m5>=m3&&m5>=m4&&m5>=m6){
        printf("%d",m5);
    }
    else if(m6>=m1&&m6>=m2&&m6>=m3&&m6>=m4&&m6>=m5) {
        printf("%d",m6);
    }
    return 0;
    }

}
