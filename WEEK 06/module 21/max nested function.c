#include <stdio.h>
int max(int x, int y , int z)
{
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    return z;

}
int main()
{
    int a,b ,c,m,i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d %d %d", &a ,&b, &c);
        m=max(a,b,c);
        printf("The max value is %d\n",m);
    }
}