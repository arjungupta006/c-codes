#include <stdio.h>

int main() {
    int units;
    float total_cost;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        total_cost = (units * 3) + 50;
    } else if (units <= 300) {
        total_cost = (100 * 3) + ((units - 100) * 5) + 150;
    } else if (units <= 500) {
        total_cost = (100 * 3) + (200 * 5) + ((units - 300) * 7) + 250;
    } else {
        total_cost = (100 * 3) + (200 * 5) + (200 * 7) + ((units - 500) * 8) + 500;
    }
        printf("Total electricity bill: %.2f rs\n", total_cost);
    return 0;
}
