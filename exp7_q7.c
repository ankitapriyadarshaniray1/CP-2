#include <stdio.h>

int main()
{
    char str[5][20];
    char *p[5];
    int i;

    printf("Enter 5 strings:\n");

    for(i=0;i<5;i++)
    {
        scanf("%s", str[i]);
        p[i] = str[i];
    }

    printf("Strings are:\n");

    for(i=0;i<5;i++)
    {
        printf("%s\n", p[i]);
    }

    return 0;
}
