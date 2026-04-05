#include <stdio.h>
#include <string.h>

int main()
 {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    strupr(str);

    printf("Uppercase string: %s", str);

    return 0;
}
