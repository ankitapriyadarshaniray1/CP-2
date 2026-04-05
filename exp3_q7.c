#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[50];
};

int main() {

    struct Employee emp[10];
    char search[50];
    int i, count = 0;

    for(i = 0; i < 10; i++) {

        printf("Enter ID, Name, Department: ");
        scanf("%d %s %s",
              &emp[i].id,
              emp[i].name,
              emp[i].dept);
    }

    printf("Enter department to search: ");
    scanf("%s", search);

    for(i = 0; i < 10; i++) {

        if(strcmp(emp[i].dept, search) == 0) {
            count++;
        }
    }

    printf("Employees in %s = %d",
            search, count);

    return 0;
}
