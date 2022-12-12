#include <stdio.h>
void prime(int x)
{
    int flag= 1;

    for (int i = 2; i < x; i++)
    {
        if (i%x==0)
        {
            flag=0;
        }
        
    }
    if (flag==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
    
    

}

int main()
{
    int n;
    scanf("%d", &n);
    prime(n);
}