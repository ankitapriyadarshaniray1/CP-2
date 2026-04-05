#include <stdio.h>

int main()
{
    char names[5][20];
    char *p[5];
    int i;

    printf("Enter 5 names:\n");

    for(i=0;i<5;i++)
    {
        scanf("%s", names[i]);
        p[i] = names[i];
    }

    printf("Names are:\n");

    for(i=0;i<5;i++)
    {
        printf("%s\n", p[i]);
    }

    return 0;
}
