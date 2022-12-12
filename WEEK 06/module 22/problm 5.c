#include <stdio.h>

int gcd(int x, int y)
{
    int i,ans;
    for (i = 1; i <= x && i <= y; ++i) {
        
        if (x % i == 0 && y % i == 0)
            ans=i;
    }
    return ans;
}
int lcm(int x, int y)
{
    int i,ans, gccd;
    for (i = 1; i <= x && i <= y; ++i) 
    {

        if (x % i == 0 && y % i == 0)
            gccd = i;
    }
    ans = (x * y) / gccd;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("The gcd is : %d\n", gcd(a, b));
    printf("The lcm is : %d\n", lcm(a, b));
}