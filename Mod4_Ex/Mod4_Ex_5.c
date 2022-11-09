#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    printf("Input 1st number: ");
    scanf("%f", &num1);

    printf("Input 2nd number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum: %.1f + %.1f = %.1f\n", num1, num2, sum);
    printf("Difference: %.1f - %.1f = %.1f\n", num1, num2, difference);
    printf("Product: %.1f * %.1f = %.1f\n", num1, num2, product);
    printf("Quotient: %.1f / %.1f = %.1f\n", num1, num2, quotient);
}
