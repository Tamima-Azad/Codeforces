/*#include<stdio.h>
int main()
{
    int t,p,q,i,j,a;
    scanf("%d\n",&t);
    for(j=1;j<=t;j++){
        scanf("%d %d",&p,&q);
        for(i=1;;i++){
                a=p+0;
            if(p%q==0){
            break;}
        else{
            a=p+i;
            if(a%q==0){
                break;
            }
        }
        }
        printf("%d\n",a-p);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int t,p,q,i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&p,&q);

        if(p%q==0){
            printf("0\n");
        }else{
        printf("%d\n",(((p/q)+1)*q-p)); }
    }
    return 0;
}
