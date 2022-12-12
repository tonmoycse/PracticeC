#include <stdio.h>

int add(int n, int nums[])
{
    int sum =0;
    int i;
    for ( i = 0; i < n; i++)
    {
        sum+= nums[i]; 
    }
    return sum;  

}

int main()
{
    int arr[]={13,74,174,234,4,3,6,345,54};

    int sum=add(9,arr);
    printf("The sum is %d\n",sum);
}