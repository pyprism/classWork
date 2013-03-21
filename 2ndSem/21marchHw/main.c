#include <stdio.h>
int main()
{
    int a,sum=0,counter = 2;
    while(1)
    {
        scanf("%d",&a);
        if(a%2!=0)
        {
            printf("That number is not even!\n");
        }
        else
         break;
    }

    while(counter<=a)
    {
        sum = sum + counter*counter;
        counter = counter + 2;
    }
    printf("Result: %d",sum);
    return 0;
}
