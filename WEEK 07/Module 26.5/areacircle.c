#include <stdio.h>
void area_of_circle(int r)
{
    float area, pi;
    pi =3.1416;
    area =pi* r*r;
    printf("%f", area);

}
int main()
{
    int r;
    scanf("%d", &r);
    area_of_circle(r);
}