#include<stdio.h>
int main()
{
    int i, count = 0 ;
    char sentense[1000];
    //  scanf("%s",sentense); not able to count space as a input.

    // count space as a input

    //gets(sentense); 


    //fgets is is for advanced user .

    fgets(sentense,sizeof(sentense),stdin); 


    for (i = 0; i < sentense[i]!='\0'; i++)
    {
        if (sentense[i]=='a' || sentense[i]=='A' ||sentense[i]=='e' || sentense[i]=='E' ||sentense[i]=='i' || sentense[i]=='I' ||sentense[i]=='o' || sentense[i]=='O' ||sentense[i]=='u' || sentense[i]=='U' )
        {
            count++ ;
        }
        
    }

    /*while (sentense[i]!='\0')
    {
        if (sentense[i]== 'a')
        {
            count++;
        }
        else if (sentense[i]=='A')
        {
            count++;
        }
        else if (sentense[i]=='e')
        {
            count++;
        }
        else if (sentense[i]=='E')
        {
            count++;
        }
        else if (sentense[i]=='i')
        {
            count++;
        }
        else if (sentense[i]=='I')
        {
            count++;
        }
        else if (sentense[i]=='o')
        {
            count++;
        }
        else if (sentense[i]=='O')
        {
            count++;
        }
        else if (sentense[i]=='u')
        {
            count++;
        }
        else if (sentense[i]=='U')
        {
            count++;
        }
        i++;
        
    }*/
    


    printf("No. of Vowels = %d", count);
}