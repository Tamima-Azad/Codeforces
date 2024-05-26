#include<stdio.h>
int main()
{
    int p,q,r,s;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if(p>q&&p>r&&p>s)
    {
        printf("%d %d %d\n",p-q,p-r,p-s);
    }
   else if(q>p&&q>r&q>s)
    {
        printf("%d %d %d\n",q-p,q-r,q-s);
    }
    else if(r>q&&r>p&&r>s)
    {
        printf("%d %d %d\n",r-q,r-p,r-s);
    }
    else if(s>q&&s>r&&s>p)
    {
        printf("%d %d %d\n",s-q,s-r,s-p);
    }
    else
    {
        printf("");
    }
    return 0;
}
