#include <stdio.h>
int test(int x)
{
    printf("Hello Phitron !\n");
    return x*2;
}
int sum(int x, int y)
{
    printf("Adding to numbers ...\n");
    return x+y ;
}
 int main()
{
    int a,b;
    a = test(7);
    printf("%d\n", a);

    b =sum(18,a);
    printf("%d\n",b);

}