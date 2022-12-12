#include <stdio.h>
int main()
{
    int ara[100];
    int n ,i,ec=0, oc=0,ans=0;
    scanf("%d",&n);

    if (n>=3)
    {
        for ( i = 1; i < n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for (i = 1; i <= n; i++)
        {
            if (ara[i]%2==0)
                {
                    ec++;
                }
            else
            {
                oc++;
            }
        
        
        }
        if (ec==1)
            {
                for ( i = 1; i < n; i++)
                {
                    if (ara[i]%2==0)
                    {
                        ans=i;
                    }
            
                }
        
            }
        else
        {
            for ( i = 1; i < n; i++)
            {
                if (ara[i]%2!=0)
                {
                    ans=i;
                }
            
            }   
        }
        printf("%d",ans);
    }
}