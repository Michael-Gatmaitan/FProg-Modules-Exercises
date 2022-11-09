#include <stdio.h>
#include <stdlib.h>
#define cmtfConv 30.48

float cmToFt(float cm) {
    return abs(cm) / cmtfConv;
}

float ftToCm(float ft) {
    return abs(ft) * cmtfConv;
}

int main() {
    float inp_cmToFt;
    float inp_ftToCm;

    printf("Enter CM: ");
    scanf("%f", &inp_cmToFt);

    printf("%.2fcm to feet is ", inp_cmToFt);
    inp_cmToFt = cmToFt(inp_cmToFt);
    printf("%.2fft\n\n", inp_cmToFt);

    printf("Enter FT: ");
    scanf("%f", &inp_ftToCm);

    printf("%.2fft to cm is ", inp_ftToCm);
    inp_ftToCm = ftToCm(inp_ftToCm);
    printf("%.2fcm\n", inp_ftToCm);

    return 0;
}
