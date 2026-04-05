#include <stdio.h>

void removeSpace(char *str)
{
    int i=0,j=0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf(" %[^\n]",str);

    removeSpace(str);

    printf("String without spaces:\n");
    printf("%s",str);

    return 0;
}
