#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[3],f=0;
        for(int i=1;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(i+j+k==n&&i%3!=0&&j%3!=0&&k%3!=0){
                        f=1;
                        printf("YES\n");
                       // a[0]=i; a[1]=j; a[2]=k;
                       printf("%d %d %d\n",i,j,k);
                        break;
                    }
                }
                if(f==1) break;
            }
            if(f==1) break;
        }
        if(f==0) printf("NO\n");

    }
}
