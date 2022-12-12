#include <stdio.h>
int main()
{
    int T, x, cnt;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d%%", &x);
        if (60 >= x)
        {
            cnt = 60 - x;
            x += 60 - x;
        }
        if (80 >= x && 60 <= x)
        {
            cnt = cnt + (80 - x) * 2;
            x += 80 - x;
        }
        if (100 >= x && x >= 80)
        {
            cnt = cnt + (100 - x) * 3;
        }
        printf("%d minutes\n", cnt);
        cnt = 0;
    }
}