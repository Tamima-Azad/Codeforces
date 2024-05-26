#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n==1)break;
    }
    if(n==1) printf("HARD");
        else if(n!=1&&n==0) printf("EASY");
    return 0;
}


/*#include<stdio.h>
int main()
{
    int i=0,n,m;
    scanf("%d\n",&m);
    while(i<m){
            scanf("%d",&n);
    i++;
    }
            if(n==0){ printf("easy"); }
    else if(n==1&&n==0){ printf("hard"); }

    return 0;
}
#include<stdio.h>
int main()
{
    int n,a[n],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[n]);
    }
    if(a[n]==0){
        printf("easy");
    }
    else if(a[n]==0&&a[n]==1){
        printf("hard");
    }
    return 0;
}*/
