#include <stdio.h>
int main()
{
    int x, y;
    int* ptrX;//pointer
    int* ptrY;//pointer
    scanf("%d %d", &x , &y);
    ptrX = &x;//pointer value assign
    ptrY = &y;//pointer value assign
    printf("%d %d",*ptrX, *ptrY);
}