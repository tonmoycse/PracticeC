#include <stdio.h>
void dessort(char a[], int l)
{
    int i, j;
    char temp;
    for (i = 0; i < l - 1; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    puts(a);
}
int main()
{
    char arr[100];
    int len;
    gets(arr);
    len = strlen(arr);
    dessort(arr, len);
}