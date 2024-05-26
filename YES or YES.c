/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char y,e,s;
    for(int i=1;i<=t;i++)
    {
        scanf("%c %c %c",&y,&e,&s);
        if((y=='Y'||y=='y')&&(e=='E'||e=='e')&&(s=='S'||s=='s'))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i;
    char ah,bh,ch,dh;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%c%c%c%c",&ah,&bh,&ch,&dh);
        if((bh=='y'||bh=='Y')&&(ch=='e'||ch=='E')&&(dh=='s'||dh=='S'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

