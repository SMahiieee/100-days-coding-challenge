#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    int newWord = 1; 
    while (str[i] != '\0') {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);  
            newWord = 0;
        } else {
            str[i] = tolower(str[i]);  
        }
        if (str[i] == ' ') 
            newWord = 1;

        i++;
    }
    printf("Output:\n%s", str);
    return 0;
}
