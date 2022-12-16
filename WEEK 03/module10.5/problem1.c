#include<stdio.h>
int main()
{
    int n,i,t1,t2,nt;
    scanf("%d", &n);
    t1=0;
    t2=1;
    nt=t1+t2;
    for ( i = 1; i <= n; i++)
    {
        if (i==1)
        {
            printf("%d ",t1);
        }
        else if (i==2)
        {
            printf("%d ",t2);
        }
        else
        {
            printf("%d ", nt);
            t1=t2;
            t2=nt;
            nt=t1+t2;
        } 
    }
}
