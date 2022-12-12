#include <stdio.h> 
int main()
{
     
    int x,y;
    int target;
    scanf("%d",&x);
    scanf("%d",&y);
 
    if( x>y )
        target=x-y;
    else
        target=y-x;
 
    printf("%d",target);
    return 0;
}