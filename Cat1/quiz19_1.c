#include <stdio.h>
#include <ctype.h>/*This header file provides functions to classify characters, 
such as isdigit to check if a character is a digit*/
#include <stdlib.h>/* This header file contains general-purpose functions,
 including the atoi function which converts a string to an integer.*/ 

int extract_number(const char *str) {/*This str declares a function named extract_number that 
takes a constant character pointer (const char *str) as input and returns an integer*/
    int num = 0, sign = 1, i=0;
    /*num: To store the extracted number.
    sign: To handle negative numbers (initially positive).
    Index for iterating through the string.
    */
    // int i = 0;

    // Skips any leading whitespace characters in the string.
    while (isspace(str[i])) {
        i++;
    }

    // Handle optional sign
    if (str[i] == '+' || str[i] == '-') {/*This is an if condition that checks if the character at position i in the string str is either a '+' or a '-'.*/
        sign = (str[i] == '-') ? -1 : 1;/*It checks if the character at position i is a '-'.
If it is, the value -1 is assigned to the variable sign.
If it's not, the value 1 is assigned to the variable sign*/
        i++;
    }

    // Extract digits
    while (isdigit(str[i])) {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num * sign;
}

int main() {
    FILE *file;
    char str[100];
    int num, sum = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Could not open file text.txt\n");
        return 1;
    }

    while (fgets(str, sizeof(str), file) != NULL) {
        num = extract_number(str);
        sum += num;
    }

    fclose(file);
    printf("Sum of numbers in the file: %d\n", sum);
    return 0;
}
