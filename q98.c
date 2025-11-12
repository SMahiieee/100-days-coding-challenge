#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, lastSpace = -1;
    gets(str); 
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }
    if (str[0] != ' ')
        printf("%c.", str[0]);
    for (i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }
    if (lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);

    return 0;
}
