//////Make calender using c program??

#include<stdio.h>

int isLeap(int year) {
    if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
        return 1;
    return 0;
}

int getStartDay(int year) {
    int day = 1; // 1st January 0001 was a Monday
    for (int i = 1; i < year; i++) {
        if (isLeap(i))
            day += 366;
        else
            day += 365;
    }
    return day % 7;
}

void printCal(int year) {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    if (isLeap(year)) {
        days[1] = 29;
    }

    int startDay = getStartDay(year);
    for (int month = 0; month < 12; month++) {
        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (int space = 0; space < startDay; space++)
            printf("    ");

        for (int day = 1; day <= days[month]; day++) {
            printf("%4d", day);
            if (++startDay > 6) {
                printf("\n");
                startDay = 0;
            }
        }
        printf("\n");
    }
}

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("\nCalendar for the year %d:\n", year);
    printCal(year);
    return 0;
}
