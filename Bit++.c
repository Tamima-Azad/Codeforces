#include<stdio.h>
int main()
{
    int n,i,x=0,b=0;
    char a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",&a);
        if(a=='X++'||a=='++X')
            {x++;}

       if(a=='--X'||a=='X--') {x--;}
    }
    printf("%d",x);
    return 0;
}
