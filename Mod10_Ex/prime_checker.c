#include <stdio.h>
#include <stdlib.h>

int isPrimeNumber(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) if (n % i == 0) return 0;
    return n;
}

int main() {
    // 0 and 1 is not a prime number.

    int num, i, biggestPrimeNumber;
    printf("Enter big number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("0 and 1 is not a prime number");
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
