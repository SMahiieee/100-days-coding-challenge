#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("%d", sum);

    return 0;
}
