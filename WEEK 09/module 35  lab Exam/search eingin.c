#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int size, j, toSearch, found;

        scanf("%d", &size);

        int arr[size];
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
        }

        scanf("%d", &toSearch);

        found = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[j] == toSearch)
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            printf("Case %d: %d\n", i, j + 1);
        }
        else
        {
            printf("Case %d: Not Found\n", i);
        }
    }
}