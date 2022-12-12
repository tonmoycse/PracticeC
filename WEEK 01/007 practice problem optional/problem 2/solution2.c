#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a%2;

    if (b==0)
    {
       printf("%d is an even integer\n",a);
    }
    else
    {
        printf("%d is an odd integer\n", a);
    }
    
    
}