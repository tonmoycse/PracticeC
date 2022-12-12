#include<stdio.h>
#include<string.h>

void repeat (char c , int count )
{
     for (int i = 0; i<count;i++){
        printf("%c", c);
    }
}

int main(){
     char arr[100];
     int i;
     scanf("%s", &arr);
     for(i=0; i<strlen(arr); i++)
     {
         if(i%2==0){
           printf("%c", arr[i]);
         }
         else{
           repeat(arr[i], 2);
         }
     }

     return 0;
}