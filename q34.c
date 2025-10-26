#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not prime");
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
