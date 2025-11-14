#include <stdio.h>
#include <ctype.h>  
int main() {
    FILE *inFile, *outFile;
    char ch;
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(inFile);
        return 1;
    }
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }
    fclose(inFile);
    fclose(outFile);
    printf("File converted successfully! Check output.txt\n");
    return 0;
}
