#include <stdio.h>

/*
    2.16 (Arithmetic) Write a program that reads two integers from the user then displays their sum, product, difference,
    quotient and remainder.
*/

int main() {
    int num1, num2;
    printf("%s", "\nType two integers:\n");
    scanf("%d %d", &num1, &num2);

    printf("\n%d + %d = %d", num1, num2, num1 + num2);
    printf("\n%d X %d = %d", num1, num2, num1 * num2);
    printf("\n%d - %d = %d", num1, num2, num1 - num2);
    printf("\n%d / %d = %d", num1, num2, num1 / num2);
    printf("\n%d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}
