#include<stdio.h>
int main()
{
    int n,i,s,c=0;
    scanf("%d",&n);
    while(n>0){
       s=n%10;
       if(s==4||s==7){
        ++c;}
          n=n/10;

    }
    if((c==4)||(c==7)) printf("YES");
    else printf("NO");
    return 0;

}
