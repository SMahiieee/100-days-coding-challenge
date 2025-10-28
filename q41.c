#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, result;
    scanf("%d", &num);
    last = num % 10;       
    digits = (int)log10(num);      
    first = num / (int)pow(10, digits); 
    if (digits == 0) {  
        result = num;
    } else {
        int middle = num % (int)pow(10, digits); 
        middle = middle / 10;                     
        result = last * (int)pow(10, digits) + middle * 10 + first;
    }

    printf("%d", result);

    return 0;
}
