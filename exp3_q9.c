#include <stdio.h>

struct Owner {
    char name[50];
    char city[50];
};

struct Car {
    char make[50];
    char model[50];
    int year;
    struct Owner owner;
};

int main() {

    struct Car c;

    printf("Enter make, model, year: ");
    scanf("%s %s %d",
          c.make,
          c.model,
          &c.year);

    printf("Enter owner name and city: ");
    scanf("%s %s",
          c.owner.name,
          c.owner.city);

    printf("\nCar Details:\n");
    printf("Make: %s\n", c.make);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Owner: %s\n", c.owner.name);
    printf("City: %s\n", c.owner.city);

    return 0;
}
