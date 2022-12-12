#include <stdio.h>
#include <math.h>
 
int main()
{
    int t, n,i ,j,k;
    int arr[20];
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        n=0;
        int count=0;
        scanf("%d",&n);
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
            if (arr[j]==1 || arr[j]==0 )
            {
                count++;
            }
            for ( k = 0; k < arr[j]/2; k++)
            {
                if (arr[j]== j*j)
                {
                    count++;
                }
                
            }
            if (count==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",count);
            }
            
            
            
            
        }
        

    }
    
 
}
