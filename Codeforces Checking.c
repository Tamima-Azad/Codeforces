#include<stdio.h>
int main()
{
    int t;
    char a[26];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",&a[i]);
        if(a[i]=='c'||a[i]=='o'||a[i]=='d'||a[i]=='e'||a[i]=='f'||a[i]=='r'||a[i]=='s')
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
