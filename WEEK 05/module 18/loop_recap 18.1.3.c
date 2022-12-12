#include <stdio.h>
int main()
{
    int i=1, sum=0;
    while (i <= 50)
    {
        if (i%2==0)
        {
            sum-=pow(i,2);
        }
        else
        {
            sum+=pow(i,2);
        }
        
        
        i++;
    }
    printf("%d", sum);
    return 0;
}