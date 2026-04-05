#include <stdio.h>

struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
};

int main() {

    struct Flags f;

    f.flag1 = 1;
    f.flag2 = 0;
    f.flag3 = 1;

    printf("Flag1: %d\n", f.flag1);
    printf("Flag2: %d\n", f.flag2);
    printf("Flag3: %d\n", f.flag3);

    return 0;
}
