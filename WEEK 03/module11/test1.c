#include <stdio.h>
int main()
{
    long long int S,A,B,C,SUM,M;
    int T, i;
    scanf("%d",&T);
    for (i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld %lld",&S,&A,&B,&C);
        SUM=A+B+C;
        M=S-SUM;
        printf("%lld\n",M);
    }
    
}