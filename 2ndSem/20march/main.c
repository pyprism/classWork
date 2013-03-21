//1^2 + 2^2 + 3^2 + .... + n^2
// using goto
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,i = 1;
    loop:
        sum = sum + i*i;
        i++;
        if(i>a)
            goto exitpro;
        goto loop;
    exitpro:
    printf("sum: %d",sum);
    return 0 ;

}
