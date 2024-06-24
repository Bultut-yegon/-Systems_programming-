#include <stdio.h>
#include <math.h>

int main() {
    int n, i, count;
    double d1;
    int d2;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;

        if (n < 2) {
            printf("%d is not prime\n", n);
            continue;
        }

        count = 0;
        for (i = 2; i <= sqrt(n); i++) {
            d1 = (double)n / (double)i;
            d2 = n / i;
            if (fabs(d1 - (double)d2) < 0.0001) {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    }

    return 0;
}