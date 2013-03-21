// x^y using loop
#include <stdio.h>
int main()
{
    int a,b,sum = 1;
    scanf("%d %d",&a,&b);
    int i = 0;
    while(i<=b)
    {
        sum = sum *a;
        i++;
    }
    printf("%d",sum);
    return 0;
}
