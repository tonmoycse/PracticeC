#include <stdio.h>
#include <string.h>

char sc(int a)
{
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    for (int i = 0; i < a; i++)
    {
        scanf("%s",&str2[i]);
        strcat(str1, str2[i]);
    }
    


    return str1;
}

int main()
{
    int m;
    scanf("%d",&m);
    char arr;
    arr = sc(m);

    puts(arr);
    
}