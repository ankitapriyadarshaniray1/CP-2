#include <stdio.h>

enum Menu {ADD = 1, SUB, EXIT};

int main() {
    int choice, a, b;

    do {
        printf("\n1.Add\n2.Subtract\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case ADD:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d", a + b);
                break;

            case SUB:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Difference = %d", a - b);
                break;

        }

    } while(choice != EXIT);

    return 0;
}
