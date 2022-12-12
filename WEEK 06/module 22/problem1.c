#include<stdio.h>

void parity(int x)
{
    if (x%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("ODD\n");
    }
    
    
}


int main()
{
    int n;
    scanf("%d",&n);
    parity(n);
    return 0;
}
