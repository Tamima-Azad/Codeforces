#include<stdio.h>
int main()
{
   int t,i,y;
   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%d",&y);
    if(y%2020==0){ printf("YES\n");}
    else if(y%2021==0){ printf("YES\n"); }
    else if(y%2021==2020){printf("YES\n");}
    else if(y/2021>=y%2021){printf("YES\n");}
    else if(y/2020>=y%2020) {printf("YES\n");}
    else {printf("NO\n");}
   }
   return 0;
}
