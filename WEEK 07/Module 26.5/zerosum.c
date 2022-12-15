#include <stdio.h>

void lastsum(int a[], int n)
{
    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%10==0)
        {
            sum+=a[i];
        }
        
    }
    printf("%d", sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    lastsum(a,n);
    
}