#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("You entered: %d, %d, %d\n", a, b, c);
    if (a > b && a > c) {
        printf("The largest number is: %d\n", a);
    } else if (b > a && b > c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }
    return 0;
}