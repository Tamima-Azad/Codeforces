#include<stdio.h>
int main ()
{
    int y,qu,rem1,rem2,rem3,i;
    scanf("%d",&y);
    if(y>=1000&&y<=9000){

        for(i=1;;i++){
            y++;
            qu=y/10;
        rem1=y%10;
        rem2=qu%10;
        qu=qu/10;
        rem3=qu%10;
        qu=qu/10;
            if(rem1!=rem2&&rem1!=rem3&&rem1!=qu&&
               rem2!=rem3&&rem2!=qu&&rem3!=qu){
                break;
               }

        }
         printf("%d",y);
    }
    return 0;
}
