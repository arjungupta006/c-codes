#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        float result = (float)a / b;
        printf("Result: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
