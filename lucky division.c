#include<stdio.h>
int main()
{
    int t,qu,rem,qu1,rem1,qu2,rem2;
    scanf("%d",&t);
    if(t>=1&&t<=9||t==1000||t==100){
        if(t==4||t==7||t%4==0)
            printf("YES");
        else
            printf("NO");
    }
    else if(t<=99){
        qu=t/10;
        rem=t%10;
        if(qu==4&&rem==4||qu==7&&rem==7||qu==4&&rem==7||qu==7&&rem==4)
            printf("YES");
            else if((qu!=7||qu!=4||rem!=4||rem!=7)
           &&((qu+rem)==7||(qu+rem)==4||(qu+rem)==77)||(qu+rem)==44)
           printf("YES");
        else
            printf("NO");
    }
    else if(t<=999){
        qu1=t/10;
        rem1=t%10;
        rem2=qu1%10;
        qu2=qu1/10;
        if(rem2==4&&qu2==4&&rem1==4||rem2==7&&qu2==7&&rem1==7||rem2==4&&qu2==4&&rem==7||
           rem2==7&&qu2==4&&rem1==4||rem2==4&&qu2==7&&rem1==4||rem2==7&&qu2==4&&rem1==7||
           rem2==7&&qu2==7&&rem1==4||rem2==4&&qu2==7&&rem1==7)
           printf("YES");
           else if((rem2!=4||qu2!=4||rem1!=4
                   ||rem2!=7||rem1!=7||qu2!=7)&&((rem2+qu2+rem1)==4||(rem2+qu2+rem1)==7))
                    printf("YES");
        else
            printf("NO");
    }

}
