#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,td,tl,ts;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    td=(k*l)/(nl*n);
    tl=(c*d)/n;
    ts=p/(np*n);
    if(td<=tl && td<=ts)
    {
        printf("%d",td);
    }
    else if(tl<=td && tl<=ts)
    {
        printf("%d",tl);
    }
    else
    {
        printf("%d",ts);
    }
    return 0;
}
