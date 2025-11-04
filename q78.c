#include <stdio.h>
int main() {
    int n, m;
    int i, j, sum = 0;
    scanf("%d %d", &n, &m);
    int A[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    if (n != m) {
        printf("Not a square matrix\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        sum += A[i][i];
    }
    printf("%d\n", sum);

    return 0;
}
