#include<stdio.h>

struct st
{
    int x;
    int ar[5];
};

int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}