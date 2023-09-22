#include <stdio.h>

/*
    2.25 (Integer Value of a Character) Here’s a peek ahead. In this chapter, you learned about integers and the type
    int. C can also represent uppercase letters and lowercase letters as an integer. You can display the integer
    equivalent of uppercase A by executing the statement printf("%d", 'A');
 */

int main() {
    char char1;
    printf("%s", "Enter one character:\n");
    scanf("%c", &char1);
    printf("%c = %d\n", char1, char1);
    
    return 0;
}
