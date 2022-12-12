#include <stdio.h>

int SumSeries(int n)
{
    int i, sum = 0, counter = 0, series_counter = 0;
    for (i = 1; i <= n; i++)
    {
        if (counter == 3)
        {
            sum -= i;
            series_counter++;
            if (series_counter == 3)
            {
                counter = 0;
                series_counter = 0;
            }
        }
        else
        {
            sum += i;
            counter++;
        }
    }
    return sum;
}

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = SumSeries(n);

    printf("%d", sum);
    return 0;
}