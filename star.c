#include <stdio.h>

void printStarPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf(" * ");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}

