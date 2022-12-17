#include<stdio.h>
long gcd(long x ,long y)
{
    if (x==0)
    {
        return y;
    }
    while (y!=0)
    {
        if (x>y)
        {
            x= x-y;
        }
        else
        {
            y=y-x;
        }
    }
    return x;
}
int main()
{
    int t,i,n,j,arr[1000],count,temp;
    temp= 0;
    count =0;
    scanf("%d",&t );
    while (t--)
    {
        scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if (arr[i]!=arr[j])
                {
                    temp =gcd(arr[i],arr[j]);
                    if (temp ==1)
                    {
                        count++;
                    }
                    
                }
                
            }
            
        }
        printf("%d\n",count);
        count =0;
    }
    
    
}