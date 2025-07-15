#include <stdio.h>
int main() {
    int year, day;
    printf("Enter Year: ");
    scanf("%d", &year);
    int y = year - 1900;
    day = (y + y/4) % 7; // 0=Monday
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Day on 1st January: %s\n", days[day]);
    return 0;
}