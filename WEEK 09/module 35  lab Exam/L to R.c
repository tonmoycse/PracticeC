#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int low, high, j, flag;
        scanf("%d %d", &low, &high);
        while (low <= high)
        {
            
            flag = 0;

            // ignore numbers less than 2
            if (low <= 1)
            {
                ++low;
                continue;
            }

            // if low is a non-prime number, flag will be 1
            for (j = 2; j <= low / 2; ++j)
            {

                if (low % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                printf("%d ", low);
            }
            ++low;
        }
    }
}