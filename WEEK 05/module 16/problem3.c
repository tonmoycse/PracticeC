#include<stdio.h>
int main ()
{
    int h, w;
    float p;
    printf("Input the height of the Rectangle : ");
    scanf("%d",&h);
    printf("Input the width of the Rectangle : ");
    scanf("%d",&w);
    p=2*(h+w);
    printf("Perimeter of the Rectangle is : %.5lf",p);
}