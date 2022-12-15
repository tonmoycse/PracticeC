#include <stdio.h>

void evenupper(char a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            a[i]=a[i]-32;
        }
        
    }
    puts(a);
}

int main()
{
    char a[50];
    int n;
    fgets(a,sizeof(a),stdin);
    n = strlen(a)-1;
    evenupper(a,n);
}