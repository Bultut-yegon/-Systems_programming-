#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    fork();
    printf("Hello Mr Beast\n");
    fork();

    return 0;
}