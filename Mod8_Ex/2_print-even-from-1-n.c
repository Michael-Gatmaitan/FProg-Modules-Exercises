#include <stdio.h>

int main() {

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("The even numbers from 1-%d is:\n", n);

    for (int i = 1; i <= n; i++) if (i % 2 == 0) printf("%d\n", i);

    return 0;
}
