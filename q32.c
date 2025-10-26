#include <stdio.h>
int main() {
    int num, reversed = 0, original, remainder;
    scanf("%d", &num);

    original = num; 
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
