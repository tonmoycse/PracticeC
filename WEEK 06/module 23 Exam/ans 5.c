#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}

int add_given_num(int a, int b)
{
    return a + b;
}

int main()
{
    int sum, a, b, c;
    scanf("%d %d", &a, &b);
    c = add_given_num(a, b);
    sum = add_three_nums(a, b, c);
    printf("%d", sum);
    return 0;
}
