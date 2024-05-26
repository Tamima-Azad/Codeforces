#include<stdio.h>
int main(){
int a,b,x=0,y=0,z=0;
scanf("%d %d",&a,&b);
for(int i=1;i<=a;i++){
    y=a%b;
    x=((y+x)/b)+(a/b);

}
printf("%d",x+a);

return 0;
}







