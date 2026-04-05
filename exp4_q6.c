#include <stdio.h>

struct Book {
    char title[30];
    char author[30];
    float price;
};

int main() {

    struct Book b[10];
    int i;

    for(i = 0; i < 10; i++) {

        printf("\nBook %d\n", i+1);

        printf("Enter title: ");
        scanf("%s", b[i].title);

        printf("Enter author: ");
        scanf("%s", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nBook Details:\n");

    for(i = 0; i < 10; i++) {

        printf("%s %s %.2f\n",
               b[i].title,
               b[i].author,
               b[i].price);
    }

    return 0;
}
