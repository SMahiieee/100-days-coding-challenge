#include <stdio.h>
int main() {
    int n, m;
    int i, j;
    int flag = 1; 
    scanf("%d %d", &n, &m);
    int A[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    if (n != m) {
        printf("False\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
