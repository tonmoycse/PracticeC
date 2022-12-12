#include<stdio.h>
int main()
{
    int n ,m;
    scanf("%d %d",&n, &m );
    while (n!=m)
    {
        printf("%d ",n);
        if (n==23)
        {
            n=0;
        }
        else
        {
            n++;
        }
    }
    printf("%d", n);
}