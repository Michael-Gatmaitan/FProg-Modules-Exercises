#include <stdio.h>

int main() {
    int edges;

    printf("Number of Edges: ");
    scanf("%d", &edges);

    switch(edges) {
        case 1:
            printf("Monogon");
            break;
        case 2:
            printf("Digon");
            break;
        case 3:
            printf("Triangle");
            break;
        case 4:
            printf("Quadrilateral");
            break;
        case 5:
            printf("Pentagon");
            break;
        case 6:
            printf("Hexagon");
            break;
        case 7:
            printf("Heptagon");
            break;
        case 8:
            printf("Octagon");
            break;
        case 9:
            printf("Nonagon");
            break;
        case 10:
            printf("Decagon");
            break;
        case 11:
            printf("Hendecagon");
            break;
        case 12:
            printf("Dodecagon");
            break;
        default:
            printf("Invalid input.");
    }

    return 0;
}
