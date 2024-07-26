#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256]; // Adjust size based on your needs
    size_t bytesRead;

    // Open the file in binary read mode
    file = fopen("example.txt", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read data from the file
    bytesRead = fread(buffer, sizeof(char), sizeof(buffer) - 1, file);
    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Null-terminate the buffer
    buffer[bytesRead] = '\0';

    // Print the read data
    printf("Read %zu bytes: %s\n", bytesRead, buffer);

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}
