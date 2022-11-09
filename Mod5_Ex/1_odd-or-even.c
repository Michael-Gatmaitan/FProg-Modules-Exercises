#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    // ternary operator: if n % 2 == 0 { even } else { odd }
    (n % 2 == 0) ? printf("%d is a even number.", n) : printf("%d is a odd number.", n);

    return 0;
}
