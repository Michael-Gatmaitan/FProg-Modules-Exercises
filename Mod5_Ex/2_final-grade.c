#include <stdio.h>

int main() {

    int finalGrade;

    printf("Enter your final grade: ");
    scanf("%d", &finalGrade);

    (finalGrade >= 75) ? printf("Passed.") : printf("Failed.");

    return 0;
}
