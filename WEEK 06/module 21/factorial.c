#include <stdio.h>

int fact(int x);

int main()
{
    int n , i, ans;
    scanf("%d", &n);
    ans=fact(n);
    
    printf("Factorial = %d\n",ans);
    
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