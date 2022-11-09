#include <stdio.h>

int main() {
    int max = 8, i = 0, j = 0;

    while(i < max) {
        i++;
        while(j < i) {
            j++;
            printf("*");
        }
        j = 0;
        printf("\n");
    }

    return 0;
}
