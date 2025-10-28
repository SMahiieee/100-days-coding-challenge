#include <stdio.h>
int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    printf("%d", product);

    return 0;
}
