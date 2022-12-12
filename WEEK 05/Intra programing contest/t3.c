#include <stdio.h>
int main()
{
    int t, n;
    int eng = 0, pak = 0;
    scanf("%d", &t);
    char arr[25];
    for (int i = 0; i < t; i++)
    {
        fgets(arr, sizeof(arr), stdin);
        for (int k = 0; k < n; i++)
        {
            if (arr[k] == 'H')
            {
                eng++;
            }
            else if (arr[k] == 'T')
            {
                pak++;
            }
            if (eng > pak)
            {
                printf("England\n");
            }
            else if (pak > eng)
            {
                printf("Pakistan\n");
            }
        }
    }
}