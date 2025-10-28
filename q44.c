#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    int numerator = 1;
    int denominator = 1;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1; 
        } else {
            numerator += 2;   
            denominator += 2;  
            sum += (double)numerator / denominator;
        }
    }

    printf("Approximate sum: %.1lf", sum);

    return 0;
}
