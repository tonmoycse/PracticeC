#include <stdio.h>
int main()
{
    int t, arr[6], flag;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        flag=0;
        for (int j = 1; j <= 6; j++)
        {
            scanf("%d", &arr[j]);  
        }
        for (int k = 1; k <= 6; k++)
        {
            if (arr[k]!=0)
            {
                flag++;
            }
            
        }
        if (flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        } 
    }
    
}