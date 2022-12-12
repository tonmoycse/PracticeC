#include <stdio.h>
int main()
{
    int n,i, arr[100];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (arr[0]!=arr[i])
        {
            printf("NO");
            break;
        }
  
    }
    
    printf("YES");
}