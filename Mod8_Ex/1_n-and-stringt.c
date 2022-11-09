#include <stdio.h>

int main() {

    int n;
    char s[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter string: ");
    scanf("%s", &s);

    for (int i = 0; i < n; i++) printf("%s\n", s);

    return 0;
}
