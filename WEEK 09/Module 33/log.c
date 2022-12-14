#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt","a");
    FILE *inputFile =fopen("h.txt","r");
    if (inputFile == NULL)
    {
        fprintf(logFile, "Input file not found at 12 :30\n");
        return 0;
    }
    
    fprintf(logFile,"Hello at 12:20 \n");
    return 0;
}