#include <stdio.h>
int main()
{
    int a,b,c;
    printf("No of lines : ");
    scanf("%d",&a);
    for(b=0;b<=a;b++)
    {
        for(c=0;c<=b;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
