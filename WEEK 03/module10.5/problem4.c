#include <stdio.h>

void main()
{
    int arr1[100];
    int n, i, j=1, tmp, k;

    printf("Input the size of array : ");
    scanf("%d", &n);
       for(i=1;i<=n;i++)
        {
	      scanf("%d",&arr1[i]);
	    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("Enter the value of K :");
    scanf("%d",&k);
    for (i = 1; i <=k ; i++)
    {
        if (i==k)
        {
            printf("%d",arr1[i]);
        }
        
    }
    
    
}