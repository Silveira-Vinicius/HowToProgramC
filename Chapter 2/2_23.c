#include <stdio.h>

/*
    2.23 (Multiples) Write a program that reads two integers and determines and displays whether the first is a multiple
    of the second. Use the remainder operator.
 */

int main() {
    int number1, number2;
    printf("%s", "Enter two integers\n");
    scanf("%d %d", &number1, &number2);

    if (number1 % number2 == 0){
        printf("Number %d is a multiple of %d\n", number1, number2);
    }
    if (number1 % number2 != 0){
        printf("Number %d is not a multiple of %d\n", number1, number2);
    }

    return 0;
}
