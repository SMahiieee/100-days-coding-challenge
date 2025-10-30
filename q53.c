#include <stdio.h>
int main() {
    int i, j;
    int maxStars = 9;
    for (i = 1; i <= maxStars; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = maxStars - 2; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
