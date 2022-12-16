#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt","w");
    int t,n,j;
    fscanf(inputFile, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        fscanf(inputFile,"%d",&n);
        if (n>0)
        {
            for (j = n; j >= -n; j--)
            {
                fprintf(outputFile,"%d ",j);
            }
            fprintf(outputFile,"\n");
        }
        else
        {
            for ( j = n; j <= -n; j++)
            {
                fprintf(outputFile,"%d ", j);
            }
            fprintf(outputFile,"\n");
        }
    }
    return 0;
}