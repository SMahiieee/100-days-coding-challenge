#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int n = strlen(s);
    int lastIndex[256];  
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    int maxLen = 0, start = 0;
    for (int end = 0; end < n; end++) {
        if (lastIndex[s[end]] >= start)
            start = lastIndex[s[end]] + 1;  
            lastIndex[s[end]] = end;  
        int currLen = end - start + 1;

        if (currLen > maxLen)
            maxLen = currLen;
    }
    printf("%d\n", maxLen);
    return 0;
}
