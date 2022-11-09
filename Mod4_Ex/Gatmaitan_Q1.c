#include <stdio.h>

int main() {

    int a, b, c;
    int biggest = 0;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    printf("Enter num3: ");
    scanf("%d", &c);

    int numberArr[] = {a, b, c};

    int i = 0;
    while(i < 3) {
        if (numberArr[i] > biggest) {
            biggest = numberArr[i];
        } else {
            biggest = biggest;
        }
        i += 1;
    }

    printf("The largest number in {%d, %d, %d} is %d", a, b, c, biggest);

    return 0;
}
