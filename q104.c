#include <stdio.h>
int findPivot(int n) {n
    int totalSum = n * (n + 1) / 2; 
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;           
        int rightSum = totalSum - leftSum + x;   

        if (leftSum == rightSum)
            return x;  
    }
    return -1;  
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int pivot = findPivot(n);
    printf("%d\n", pivot);
    return 0;
}
