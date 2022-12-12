#include <stdio.h>
void matSum(int r, int c)
{
    int a[100][100], b[100][100], sum[100][100], i, j;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n");
            }
        }
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    matSum(N, M);
    return 0;
}
