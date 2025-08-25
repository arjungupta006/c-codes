#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    // Input values
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check profit, loss, or no profit/loss
    if (sellingPrice > costPrice) {
        printf("Profit =", sellingPrice - costPrice);
    }
    else if (costPrice > sellingPrice) {
        printf("Loss =", costPrice - sellingPrice);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
