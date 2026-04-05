#include <stdio.h>

int main()
 {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Occurrences of %c = %d", ch, count);

    return 0;
}
