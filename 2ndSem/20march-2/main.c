//1^2 + 2^2 + 3^2 + .... + n^2
// using while loop
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,i = 1;
    while(i<=a)
    {
        sum = sum + i*i;
        i++;

    }
    printf("sum: %d",sum);
    return 0 ;

}
