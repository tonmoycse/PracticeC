#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr= arr;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}