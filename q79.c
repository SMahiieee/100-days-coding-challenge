#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int k = 0; k < n + m - 1; k++) {
        for (int i = 0; i < n; i++) {
            int j = k - i;
            if (j >= 0 && j < m) {
                printf("%d ", A[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
