#include <stdio.h>

int factorial(int n) {
    // Ex: n = 5, (5 * f(5-1) -> 4 * f(4-1) -> 3 * f(3-1) -> 2 * f(2-1) -> 1 * f(1-1) = 1 or 1 * 1 = 1)
    // therefore, 5 * 4 * 3 * 2 * 1.
    /* I did recursion here since it's the best
       way to minimize heap from cpu. */
    return n >= 1 ? n * factorial(n - 1) : 1;
}

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("The Factorial of %d is: %d", num, factorial(num));
}
