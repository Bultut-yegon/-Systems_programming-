//seeking from the end of the file
#include <stdio.h>
typedef int use;

use main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Move 10 bytes back from the end of the file
    fseek(file, -10, SEEK_END);

    // Now you can read from the new position
    use c = fgetc(file);
    if (c != EOF) {
        printf("Character 10 bytes from the end: %c\n", (char)c);
    } else {
        printf("Error reading character\n");
    }

    fclose(file);
    return 0;
}
