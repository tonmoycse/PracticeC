#include <stdio.h>

int sum(int n)
{
    int i,temp,rem,s=0;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        temp=a[i];
        rem=temp%10;
        s=s+rem;
        temp=a[i];
        rem=temp/1000;
        s=s+rem;
    }
    return s;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}