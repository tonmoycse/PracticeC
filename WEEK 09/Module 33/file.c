#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("i.txt","r");
    if(inputFile==NULL)
    {
        printf("No File Found");
        return 0;
    }

    FILE *outputFile;
    outputFile = fopen("o.txt","w");
    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch==EOF)
        {
            break;
        }
       fputc(ch, outputFile);

    }
}  