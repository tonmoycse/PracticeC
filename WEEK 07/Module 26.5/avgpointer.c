#include <stdio.h>
void avg(int *x , int *y)
{
    int sum;
    float avag;
    sum = *x+*y;
    avag=(float) sum/2;
    printf("%.3f",avag);
}

int main()
{
    int x,y;
    int *ptrX,*ptrY;
    scanf("%d %d", &x ,&y);
    ptrX =&x;
    ptrY = &y;
    avg(ptrX, ptrY);
}