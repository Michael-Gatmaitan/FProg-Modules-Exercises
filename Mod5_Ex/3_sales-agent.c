#include <stdio.h>

int main() {

    char name[30];
    float revenue;
    float commission;

    int rate;

    // fgets function allows user to enter array with spaces that can override the next user input.
    // strtok function removes newline made by fgets.
    printf("Name: ");
    fgets(name, 30, stdin);
    strtok(name, "\n");

    printf("Input revenue: ");
    scanf("%f", &revenue);

    if (revenue <= 999.99) { rate = 4; }
    else if (revenue <= 9999.99) { rate = 5; }
    else if (revenue <= 49999.99) { rate = 6; }
    else if (revenue <= 99999.99) { rate = 7; }
    else if (revenue <= 999999.99 ) { rate = 10; }

    commission = (revenue * rate) / 100;

    // ASCII code of "%" is 37
    printf("\nREVENUE: %f\nRATE: %d%c\n\n", revenue, rate, 37);
    printf("Hi, %s! your COMMISSION payable is: %f", name, commission);

    return 0;
}
