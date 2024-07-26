#include <stdio.h>

int sum_of_digits(int num) {
    /*
    Computes the sum of all the digits of the given positive integer.

    Args:
        num (int): The positive integer whose digits will be summed.

    Returns:
        int: The sum of all the digits of the given number.
    */
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    printf("Enter a positive integer (1 to 10 digits): ");
    scanf("%d", &num);

    printf("The sum of the digits of %d is %d\n", num, sum_of_digits(num));

    return 0;
}