#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the one side size of square: ");
    scanf("%f", &side);

    area = side * side;

    printf("If the side of square is %2.f\n", side);
    printf("Then the area is %2.f", area);
    return 0;
}
