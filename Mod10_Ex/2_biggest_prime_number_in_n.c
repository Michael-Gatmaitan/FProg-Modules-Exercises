#include <stdio.h>
#include <stdlib.h>

int isPrimeNumber(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) if (n % i == 0) return 0;
    return n;
}

int main() {
    int num, i, biggestPrimeNumber;
    printf("Enter big number: ");
    scanf("%d", &num);

    // > 0, 0 and 1 is not a prime number.
    if (num == 0 || num == 1 || num < 0) {
        printf("0 and 1 is not a prime number.\nAnd input cannot be a negative number.\n");
        exit(1);
    }

    for (i = num; i > 1; i--) {
        if (isPrimeNumber(i) != 0) {
            biggestPrimeNumber = i;
            break;
        }
    }

    printf("The biggest Prime number in %d is %d.\n\n", num, biggestPrimeNumber);
}
