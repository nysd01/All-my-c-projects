#include<stdio.h>
#include<time.h>

int daysDiff(struct tm a, struct tm b){
    // Function to calculate the difference (in days) between two dates
    time_t x = mktime(&a);
    time_t y = mktime(&b);
    return difftime(y, x) / (60 * 60 * 24);
}

int main() {
    int day, month, year;
    char slash1, slash2;
    
    printf("Enter the date in mm/dd/yy format: ");
    scanf("%d%c%d%c%d", &month, &slash1, &day, &slash2, &year);
    
    // Get the current year. If the month is December and the day is after 25, use the next year.
    year += ((month == 12 && day > 25) ? 1901 : 1900);

    struct tm userInput = {0, 0, 0, day, month - 1, year - 1900};
    struct tm nextChristmas = {0, 0, 0, 25, 11, year - 1900};

    int totalDays = daysDiff(userInput, nextChristmas);
    printf("\nThere are %d days left until next Christmas.\n", totalDays);

    return 0;
}