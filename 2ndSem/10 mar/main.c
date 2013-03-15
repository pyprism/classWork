#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    int length = strlen(a);
    gets(a);
    //printf("%s",a);
    //printf("\nLength of string: %d",strlen(a));
    int x =strlen(a)-1;
    for(x; x<length; x++)
    {
        printf(":");
        scanf("%c",a[x]);
    }
    printf("New length : %d",strlen(a));
    return 0;
}
