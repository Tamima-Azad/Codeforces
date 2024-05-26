#include<stdio.h>
int main()
{
   int t,n,a,b,i,j,c=0,y=0;
   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d %d",&a,&b);
        if(a<=10){
            if(b>c){
                c=b;
                y=j;
            }
        }

    }
    printf("%d\n",y);
    c=0;
}
return 0;
}

/*#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        int max = 0, res;
        for(int j = 1; j <= n; j++){
            int a, b;
            scanf("%d %d", &a, &b);
            if(a <= 10){
                if(b > max){
                    max = b;
                    res = j;
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}*/

