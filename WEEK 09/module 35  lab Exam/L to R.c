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
            if (low <= 1)
            {
                if (low==1)
                {
                    printf("1 ");
                }
                ++low;
                continue;
            }
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
        printf("\n");
    }
}