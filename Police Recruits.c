#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",n);

    }

}


/*#include<stdio.h>
int main(){
    int a=1,b,c,p=0,n=0;
    scanf("%d",&b);
    while(a<=b){
        scanf("%d",&c);
        if(c>=0){p=p+c;}
        else if(c<=0){n++;
            if(p==0){n=n;}
            else{n=n-p;

                p=p-1;
            }
        }
        a++;
    }
    if(p<0){printf("%d",n*(-1));}
            else{printf("%d",n);}
            return 0;
}*/
