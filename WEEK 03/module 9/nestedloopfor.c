#include <stdio.h>
int main ()
{
    int i,j;
    for (i = 1; i <= 30; i++)
    {
        printf("\n%d",i);
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        
    }
    
}