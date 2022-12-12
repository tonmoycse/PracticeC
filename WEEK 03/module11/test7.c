#include <stdio.h>
int main()
{
    int i, N, Roll[20], K;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Roll[i]);
    }
    scanf("%d", &K);

    for (i = 0; i < K % N; i++)
    {
        int temp = Roll[0];
        Roll[0] = Roll[N - 1];
        Roll[N - 1] = temp;
        for (int i = N - 2; i >= 0; i--)
        {
            int temp2 = Roll[0];
            Roll[0] = Roll[i];
            Roll[i] = temp2;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", Roll[i]);
    }
}