#include <stdio.h>
#include <string.h>
void sorting(char *arr1, char *arr2)
{
    int cuntarr[500] = {0}, len, i, index;
    len = strlen(arr1);
    for (i = 0; i < len; i++)
    {
        cuntarr[arr1[i]]++;
    }
    for (i = 0, index = 0; i < 500; i++)
    {
        if (cuntarr[i]!=0)
        {
            while (cuntarr[i]>0)
            {
                arr2[index++]=i;
                cuntarr[i]--;
            }
            
        }
        
    }
    arr2[index]='\0';
}

int main()
{
    char S[100],arr[100];
    gets(S);
    sorting(S,arr);
    puts(arr);
}