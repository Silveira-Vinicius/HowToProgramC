#include <stdio.h>

/*
    2.18 (Comparing Values) Write a program that asks the user to enter the highest rainfall ever recorded in one season
    for a country, and the rainfall in the current year for that country, obtains the values from the user, checks if 
    the current rainfall exceeds the highest rainfall, and prints an appropriate message on the screen. If the current 
    rainfall is higher, it assigns that value as the highest rainfall ever. Use only the single-selection form of the 
    if statement you learned in this chapter.
*/

int main() {
    double highestRainfall, currentRainfall;
    printf("%s", "\nEnter the highest rainfall ever recorded and the current rainfall\n");
    scanf("%lf %lf", &highestRainfall, &currentRainfall);
    if (highestRainfall <= currentRainfall){
        highestRainfall = currentRainfall;
        printf("Current season rainfall is %lf and is now the highest ever season rainfall.\n", highestRainfall);
    }
    if (highestRainfall>currentRainfall){
        printf("Current season rainfall is %lf and the highest ever season rainfall is %lf.\n", currentRainfall,
               highestRainfall);
    }
    return 0;
}
