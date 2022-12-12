#include <stdio.h>
int main()
{
    int N, i,j, T, flag;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        flag=0;
        scanf("%d", &N);
        if (N == 0 || N == 1)
            flag = 1;

        for (j = 2; j <= N / 2; ++j)
        {
            if (N % j == 0)
            {
                flag = 1;
                continue;
            }
        }
        if (flag == 0)
        {
            printf("Yes \n");
        }
        else
        {
            printf("No \n");
        }
    }
}
