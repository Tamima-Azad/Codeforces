#include<stdio.h>
int main()
{
    int n,x,y,z,x1=0,y1=0,z1=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&x,&y,&z);
        x1=x+x1;
        y1=y+y1;
        z1=z+z1;
    }
    if(x1==0&&y1==0&&z1==0){
        printf("YES");
    }else{
        printf("NO"); }

    return 0;
}
