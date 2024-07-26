#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char in[80], out[80];
    int i, j;

    while (1) {
        scanf("%s", in);
        if (strcmp(in, ".") == 0) {
            break;
        }

        strcpy(out, in);
        for (i = 0; i < strlen(out); i++) {
            if (out[i] == '.' || out[i] == ',' ||
                out[i] == '"' || out[i] == ';' ||
                out[i] == '!' || out[i] == '?' ||
                out[i] == '(' || out[i] == ')' ||
                out[i] == ':') {
                for (j = i; j < strlen(out); j++) {
                    out[j] = out[j + 1];
                }
                i--; // Decrement to check the current position again
            }
        }
        printf("%s\n", out);
    }
    return 0;
}
