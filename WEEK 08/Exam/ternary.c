#include<stdio.h>
void max(int a,int b)
{
    int m;
    m=a>b?a:b;
    printf("Maximum : %d",m);

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    max(a,b);
}