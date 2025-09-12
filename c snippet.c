#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        int i = 1;
        while (i <= num) {
            factorial = factorial * i;
            i++;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}
