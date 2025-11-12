#include <stdio.h>
#include <string.h>
int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;
    gets(date); 
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);
    sscanf(month, "%d", &m);
    printf("%s-%s-%s", day, months[m - 1], year);
    return 0;
}
