#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
    char department[30];
};

int main() {

    struct Employee e[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {

        printf("\nEmployee %d\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        printf("Department: ");
        scanf("%s", e[i].department);
    }

    for(i = 0; i < 5; i++) {
        for(j = i+1; j < 5; j++) {

            if(e[i].salary > e[j].salary) {

                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nSorted Employees:\n");

    for(i = 0; i < 5; i++) {

        printf("%s %d %.2f %s\n",
               e[i].name,
               e[i].id,
               e[i].salary,
               e[i].department);
    }

    return 0;
}
