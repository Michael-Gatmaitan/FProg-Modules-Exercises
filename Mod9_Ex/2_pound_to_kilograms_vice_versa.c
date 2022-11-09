#include <stdio.h>
#include <stdlib.h>
#define ptkConv 2.205

float poundToKilograms(float pound) {
    return abs(pound) / ptkConv;
}

float kilogramsToPound(float kilograms) {
    return abs(kilograms) * ptkConv;
}

int main() {
    float inp_poundToKg;
    float inp_kgToPound;

    printf("Enter pound: ");
    scanf("%f", &inp_poundToKg);

    printf("%.2fpound to kg is ", inp_poundToKg);
    inp_poundToKg = poundToKilograms(inp_poundToKg);
    printf("%.2fkg\n\n", inp_poundToKg);

    printf("Enter kilograms: ");
    scanf("%f", &inp_kgToPound);

    printf("%.2fkg to pound is ", inp_kgToPound);
    inp_kgToPound = kilogramsToPound(inp_kgToPound);
    printf("%.2fpound\n", inp_kgToPound);

    return 0;
}
