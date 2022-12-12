#include <stdio.h>
#include <math.h>

int seven_counter(int *array, int n)
{
    int i, count = 0, half_num, rem;
    for (i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            half_num = n / 2;
        }
        else
        {
            half_num = n / 2 + 1;
        }
        int num = *(array + i);
        while (num > 0)
        {
            rem = num % 10;
            if (rem == 7)
            {
                count++;
            }
            num = num / 10;
        }
    }

    if (count >= half_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, i, arr[100], count = 0, digit, *array;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    array = arr;
    digit = seven_counter(array, n);
    if (digit)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }

    return 0;
}