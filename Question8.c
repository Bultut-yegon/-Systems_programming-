#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int sqrtFloor, sqrtCeil;
    int lowerSquare, upperSquare;
    int closestNumber;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the floor and ceiling of the square root of the number
    sqrtFloor = (int)floor(sqrt(number));
    sqrtCeil = (int)ceil(sqrt(number));

    // Calculate the squares of the floor and ceiling values
    lowerSquare = sqrtFloor * sqrtFloor;
    upperSquare = sqrtCeil * sqrtCeil;

    // Determine the closest integer with a whole number square root
    if (number - lowerSquare <= upperSquare - number) {
        closestNumber = lowerSquare;
    } else {
        closestNumber = upperSquare;
    }

    // Report the result
    printf("The closest integer with a whole number square root is %d.\n", closestNumber);

    return 0;
}
