#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "w");

    int n,a;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fscanf(inputFile, "%d", &a);
        fprintf(outputFile, "%d ", a);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}