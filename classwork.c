#include <stdio.h>

int main() {
    int a, b, c, d;

 
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a <= b && a <= c && a <= d) {
        printf("The smallest number is: %d\n", a);
    }
    else if (b <= a && b <= c && b <= d) {
        printf("The smallest number is: %d\n", b);
    }
    else if (c <= a && c <= b && c <= d) {
        printf("The smallest number is: %d\n", c);
    }
    else {
        printf("The smallest number is: %d\n", d);
    }

    return 0;
}
