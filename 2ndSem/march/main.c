#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    //scanf("%c",&a);
    //printf("%d %c",a,a);
    //while(1)
    //{
    printf("\nEnter Y ");
    a=getchar();
    // if( isalpha(a) && a == "y" )
    // break;
    //}
    if(isalpha(a) && islower(a))
        printf("%c",toupper(a));
    else
        printf("%c",a);
    return 0;
}
