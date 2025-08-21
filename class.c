#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("The number %d is positive.\n", a);
    } else if (a < 0) {
        printf("The number %d is negative.\n", a);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}




//input a number from user and print if the nu,mber is positive negative or zero