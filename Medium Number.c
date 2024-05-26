#include<stdio.h>
int main()
{
    int t,a,b,c,i=1;
    scanf("%d\n",&t);
        for(i;i<=t;i++){
            scanf("%d %d %d",&a,&b,&c);
            if(a>=1&&b>=1&&c>=1&&a<=20&&b<=20&&c<=20){
                if(b>a&&b<c){
                    printf("%d\n",b);}
                else if(a>b&&a<c){
                    printf("%d\n",a);}
                    else if(c>b&&c<a){
                        printf("%d\n",c);}
                            else if(b<a&&b>c){
                            printf("%d\n",b);}
                else if(c>a&&c<b){
                    printf("%d\n",c);}
                else if(a>c&&a<b){
                    printf("%d\n",a);}

            }
        }

}
