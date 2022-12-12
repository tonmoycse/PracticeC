#include<stdio.h>
void passVal(int a)
{
    printf("Before adding value inside function  = %d \n",a);
    a=a+100;
    printf("After adding value inside function = %d \n",a);
}
int main()
{
    int a=100;
    printf("Before function call a = %d \n", a);    
    passVal(a);  //passing value in function    
    printf("After function call a = %d \n", a);  
}