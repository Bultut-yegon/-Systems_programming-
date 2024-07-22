#include <stdio.h>
#include <string.h>

int main() {
    char str[100];/*A character array to store the string input from the user, 
    with a maximum length of 99 characters plus a null terminator.*/
    FILE *file;//A file pointer to handle the file operations.
    
    printf("Enter a string: ");
    // Read a string with spaces and prevent buffer overflow
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    
    // Remove the newline character if it is included in the string
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') // Checks if the length of the string is greater than 0 and if the last character is a newline (\n).
    {
        str[len - 1] = '\0';// Replaces the newline character with a null terminator (\0) to remove it.
    }
    
    file = fopen("output.txt", "w");/*Opens the file "output.txt" in write mode. If the file does not exist,
     it is created. If it cannot be opened, fopen returns NULL.*/
    if (file == NULL)//: Checks if fopen returned NULL, indicating that the file could not be opened.
     {
        printf("Could not open file for writing\n");
        return 1;//Exits the program with a non-zero status to indicate an error.
    }
    
    fprintf(file, "%s", str);
    fclose(file);//Closes the file after writing and resources are released.
    
    printf("String written to output.txt\n");
    return 0;
}

