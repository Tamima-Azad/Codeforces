
#include<stdio.h>
int main()
{
    long long int n,k,p;
    scanf("%lld %lld",&n,&k);
    if(n%2==0){
        if(k<=n/2){
           printf("%lld",(2*k)-1);
        }
        else{
            printf("%lld",2*(k-(n/2)));
        }
    }
    else{
        if(k<=((n/2)+1)){
            printf("%lld",(2*k)-1);
        }
        else{
            printf("%lld",2*(k-1-(n/2)));
        }
    }
    return 0;
}
