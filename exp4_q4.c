#include <stdio.h>

union Data {
    struct {
        unsigned int a : 2;
        unsigned int b : 2;
    } bits;
};

int main() {
    union Data d;

    d.bits.a = 2;
    d.bits.b = 3;

    printf("a = %d\n", d.bits.a);
    printf("b = %d\n", d.bits.b);

    return 0;
}
