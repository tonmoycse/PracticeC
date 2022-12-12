#include <stdio.h>
void passRef(int *a)
{
    printf("Before adding value inside function = %d \n", *a);
    (*a) += 100;
    printf("After adding value inside function = %d \n", *a);
}
int main()
{
    int a = 100;
    printf("Before function call a = %d \n", a);
    passRef(&a); // passing reference in function
    printf("After function call a = %d \n", a);
}