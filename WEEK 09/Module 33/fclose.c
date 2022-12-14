#include<stdio.h>
int main()
{
    FILE *inputFile = fopen("i.txt","r");
    if (inputFile == NULL)
    {
        return 0;
    }
    
    FILE *outputFile = fopen("out.txt","w");

    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outputFile, "%d", n);
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}