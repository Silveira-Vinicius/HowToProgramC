#include <stdio.h>

/*
    2.22 (Odd or Even) Write a program that reads an integer and determines and displays whether it’s odd or even. Use the
    remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided
    by two.
 */

int main() {
    int number;
    printf("%s", "Enter one integer\n");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is even\n", number);
    }
    if (number % 2 == 1) {
        printf("The number %d is odd\n", number);
    }

    return 0;
}
