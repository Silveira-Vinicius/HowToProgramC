#include <stdio.h>

/*
    2.20 (Converting from Seconds to Hours, Minutes, and Seconds) Write a program that asks the user to enter the total
    time elapsed, in seconds, since an event occurred and converts the time to hours, minutes, and seconds. The time
    should be displayed as hours:minutes:seconds. [Hint: Use the modulus operator].
 */

int main() {
    int seconds;
    int hours = 0;
    int minutes = 0;
    printf("%s", "Enter the total time in seconds:\n");
    scanf("%d", &seconds);
    if (seconds>=60){
        minutes = seconds / 60;
        seconds = seconds % 60;
        hours = minutes / 60;
        minutes = minutes % 60;
    }

    printf("The time is %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
