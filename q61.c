#include <stdio.h>
int main() {
    int n, i, key, foundIndex = -1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1)
        printf("Found at index %d", foundIndex);
    else
        printf("-1");

    return 0;
}
