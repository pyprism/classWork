//Note : "else if" is not nessary for range
#include <stdio.h>
int main()
{
    int x;
    printf("Number : ");
    scanf("%d",&x);
    if(80<=x && x<=100)
    {
        printf("A+\n");
    }
    if(75<=x && x<=79)
    {
        printf("A\n");
    }
    if(70<=x && x<=74)
    {
        printf("B+");
    }
    if(60<=x && x<=64)
    {
        printf("B-");
    }
    if(55<=x && x<=59)
    {
        printf("C+");
    }
    if(0 <=x && x<=54)
    {
        printf("Fail");
    }
    return 0;
}
