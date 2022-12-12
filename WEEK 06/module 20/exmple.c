#include <stdio.h>
int gcd(int x, int y)
{
    int i;
    for ( i = x; i >=1; i--)
    {
        if (x%i==0 && y%i==0)
        {
            return i;
        }
        
    }
    

}
int main ()
{
    int a,b , ans;
    scanf("%d %d", &a, &b);
    ans = gcd(a,b);
    printf("The G.C.D is %d\n", ans);
    return 0;

}