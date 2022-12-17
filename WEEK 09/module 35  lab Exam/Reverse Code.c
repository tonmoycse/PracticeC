#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, reverse = 0, remainder;
        scanf("%d", &n);

        while (n!=0)
        {
            remainder= n%10;
            if (remainder==1)
            {
                printf("A");
            }
            else if (remainder==2)
            {
                printf("B");
            }
            else if (remainder==3)
            {
                printf("C");
            }
            else if (remainder==4)
            {
                printf("D");
            }
            else if (remainder==5)
            {
                printf("E");
            }
            else if (remainder==6)
            {
                printf("F");
            }
            else if (remainder==7)
            {
                printf("G");
            }
            else if (remainder==8)
            {
                printf("H");
            }
            else if (remainder==9)
            {
                printf("I");
            }

            n/=10;
        }
        
        printf("\n");
    }
}