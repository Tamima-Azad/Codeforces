#include<stdio.h>
int main(){
int n,h,a,b=0;
scanf("%d %d",&n,&h);
for(int i=1;i<=n;i++){
    scanf("%d",&a);
    if(a>h){b=b+2;}
    if(a<=h){b=b+1;}
}
printf("%d",b);
return 0;
}
