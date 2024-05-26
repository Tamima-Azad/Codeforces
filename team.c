#include<stdio.h>
int main()
{
    int n,p,v,t,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d %d %d",&p,&v,&t);
            if((p==1||p==0)&&(v==1||v==0)||(t==1&&t==0)){
                if((p+v+t)==2||(p+v+t)==3){
                    ++c;
                }
            }
    }
    printf("%d",c);
}
