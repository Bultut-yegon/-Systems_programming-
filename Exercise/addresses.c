#include <stdio.h>

int main() {
    int a = 100;
    char c = 'Z';
    float f = 3.142;

    printf("Address of a: %p\n", (void*)&a);
    printf("Address of c: %p\n", (void*)&c);
    printf("Address of f: %p\n", (void*)&f);

    return 0;
}
