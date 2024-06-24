#include <stdio.h>
<<<<<<< HEAD

int main() {
    int a = 100;
    char c = 'Z';
    float f = 3.142;

    printf("Address of a: %p\n", (void*)&a);
    printf("Address of c: %p\n", (void*)&c);
    printf("Address of f: %p\n", (void*)&f);
=======
// #include <string>

int main()
{
    int a = 100;
    char c = 'Z';
    float f = 3.142;
    // char s[] = "Hello members";

    /*
    Lets break down the code below:
    printf prints the code on the screen
    %p prints the address of the variable(pointer)
    \n represents a new line character
    (void *) casts the pointer to a void pointer. This is a type cast. 
    It converts the address of c (which is of type char*) to a void*. This
     is done because %p expects a void* type in printf
    */

    printf("Address of a: %p\n", (void *)&a);
    printf("Address of c: %p\n", (void *)&c);
    printf("Address of f: %p\n", (void *)&f);
    // printf("Here we go : %s\n", s);
>>>>>>> master

    return 0;
}
