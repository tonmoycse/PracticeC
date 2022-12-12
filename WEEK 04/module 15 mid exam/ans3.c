#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, f;

    scanf("%d",&n);// input array size
    scanf("%d",&r);// input common ratio
    scanf("%d",&f);// input starting number

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            arr[i]=f;
            printf("%d ",arr[i]);
        }
        else
        {
            arr[i]=f*pow(r,i);
            printf("%d ",arr[i]);
        }  
    }
    
}