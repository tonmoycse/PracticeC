#include <stdio.h>

int fact(int x);

int main()
{
    int n,r , i, perm, comb;
    scanf("%d %d", &n,&r);
    perm=fact(n)/fact(n-r);
    comb =fact(n)/(fact(n-r)*fact(r));
    
    printf("nPr = %d\n",perm);
    printf("nCr = %d\n",comb);
    
}

int fact(int x)
{
    int res , i;
    res=1;
    for ( i = 1; i <= x; i++)
    {
        res *=i;
    }
    return res;

}