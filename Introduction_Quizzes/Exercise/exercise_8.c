#include <stdio.h>
#include <math.h>

int closest(int num)
{
    /*
    Finds the closest integer to the given positive number that has a whole number square root.

    Args:
        num (int): The positive integer to find the closest square root for.

    Returns:
        int: The closest integer to the given number that has a whole number square root.
    */
    double sqrt_num = sqrt((double)num);
    int closest_int = round((int)sqrt_num);

    if (closest_int * closest_int == num)
    {
        return num;
    }
    else
    {
        int lower = closest_int - 1;
        int upper = closest_int + 1;
        if (num - lower * lower < upper * upper - num)
        {
            return lower * lower;
        }
        else
        {
            return upper * upper;
        }
    }
}

int main() {
    int num;

    printf("Enter a positive integer (1 to 7 digits): ");
    scanf("%d", &num);

    printf("The closest integer with a whole number square root is: %d\n", closest(num));

    return 0;
}