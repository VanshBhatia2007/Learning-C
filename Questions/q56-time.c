// Write a program to read time in string format and extract hours, minutes and 
// second also check time validity.
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int isValidTime(int hours, int minutes, int seconds) {
    if(hours < 0 || hours > 23) return 0;
    if(minutes < 0 || minutes > 59) return 0;
    if(seconds < 0 || seconds > 59) return 0;
    return 1;
}
int main() {
    char timeStr[9]; // Format HH:MM:SS
    int hours, minutes, seconds;

    printf("Enter time in HH:MM:SS format: ");
    scanf("%8s", timeStr);

    // Extract hours, minutes, and seconds
    if(sscanf(timeStr, "%2d:%2d:%2d", &hours, &minutes, &seconds) != 3) {
        printf("Invalid time format.\n");
        return 1;
    }

    // Check time validity
    if(isValidTime(hours, minutes, seconds)) {
        printf("Valid time: %02d:%02d:%02d\n", hours, minutes, seconds);
    } else {
        printf("Invalid time values.\n");
    }

    return 0;
}