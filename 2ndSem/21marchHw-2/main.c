//(2/1)^2+(4/3)^2+...+(n(n-1))^2 [n must be even number]
#include <stdio.h>
int main()
{
    int a,sum=0,counter = 2,counter2 = 1;
    while(1)
    {
        scanf("%d",&a);
        if(a%2!=0)
        {
            printf("That's not even number !\n");
        }
        else
         break;
    }

    while(counter<=a)
    {
        sum = sum + ((counter/counter2)*(counter/counter2));
        counter = counter + 2;
        counter2 = counter2 + 2;
    }
    printf("Result: %d",sum);
    return 0;
}
