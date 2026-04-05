 #include <stdio.h>

struct Student {
    char name[30];
    int roll;
};

int main() {

    struct Student s[3] = {
        {"Ravi", 1},
        {"Amit", 2},
        {"Sita", 3}
    };

    int i;

    for(i = 0; i < 3; i++) {
        printf("%s %d\n", s[i].name, s[i].roll);
    }

    return 0;
}

