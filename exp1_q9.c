#include <stdio.h>

int main() {
    char str1[50], str2[50], result[100];
    int i = 0, j = 0, k = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    fflush(stdin);

    printf("Enter second string: ");
    scanf("%s", str2);
     fflush(stdin);

    while(str1[i] != '\0' || str2[j] != '\0') {

        if(str1[i] != '\0') {
            result[k++] = str1[i++];
        }

        if(str2[j] != '\0') {
            result[k++] = str2[j++];
        }
    }

    result[k] = '\0';

    printf("Merged string: %s", result);

    return 0;
}
