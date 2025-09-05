#include <stdio.h>
int main() {
    int digit;
    do while ( digit != 0 ) {
        printf("Enter a digit: ");
        scanf("%d", &digit);
        if (digit > 0) {
            printf("You entered a positive number: %d\n", digit);
        } else if (digit < 0) {
            printf("You entered a negative number: %d\n", digit);
        } else {
            printf("You entered zero.\n");
        }
    } while (digit != 0);
    return 0;
}
