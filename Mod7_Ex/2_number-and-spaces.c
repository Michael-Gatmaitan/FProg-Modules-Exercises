#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int spaces = 0;
    int tempJ;

    do {
        printf("%d", n);
        n--;
        spaces++;
        tempJ = 0;
        while(tempJ < spaces) {
            tempJ++;
            printf(" ");
        }
    } while(n > 0);

    return 0;
}
