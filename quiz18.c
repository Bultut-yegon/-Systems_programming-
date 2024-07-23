#include <stdio.h>

int main() {
    char str[100];
    FILE *file;
    
    printf("Enter a string: ");
    // Read a string with spaces and prevent buffer overflow
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    
    // Remove the newline character if it is included in the string
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing\n");
        return 1;
    }
    
    fprintf(file, "%s", str);
    fclose(file);
    
    printf("String written to output.txt\n");
    return 0;
}

