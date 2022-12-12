#include <stdio.h>
int main()
{
    long long int N, ans;
    scanf("%lld", &N);
    if (N % 3 == 0)
    {
        ans = N / 3;
        printf("%lld", ans);
    }
    else
    {
        printf("-1");
    }
}