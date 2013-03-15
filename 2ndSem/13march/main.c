#include <stdio.h>
int count(int a)
{
    int counter = 1;

    while(a! = 1)
    {
        if(a%2 == 0)
        {
            a = a/2;
        }
        else
        {
            a = 3*a+1;
        }
        counter++;
    }

    return counter;
}
int main()
{
    int b;
    printf("Num : ");
    scanf("%d",&b);
    int x = count(b);
    printf("%d",x);
    return 0;
}
