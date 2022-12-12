#include <stdio.h> 
int main ()
{
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int i;

    // small to capital

    /*for ( i = 0; ch[i] !='\0'; i++)
    {
        if (ch[i]>='a' && ch[i]<= 'z')
        {
            ch[i]-=32;
        }
        
    }*/

    //capital to small

    for ( i = 0; ch[i] !='\0'; i++)
    {
        if (ch[i]>='A' && ch[i]<= 'Z')
        {
            ch[i]+=32;
        }
        
    }
    puts(ch); // alternative of printf("%s", ch);

}