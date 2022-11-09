#include <stdio.h>

int main() {
    float w, l, area;

    printf("Enter width: ");
    scanf("%f", &w);

    printf("Enter length: ");
    scanf("%f", &l);

    area = l * w;

    printf("The Rectangle's\nWidth: %.3f\nLength: %.3f\n", w, l);
    printf("The area of rectangle is %.3f\n", area);
    return 0;
}
