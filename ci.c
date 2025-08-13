#include <stdio.h>
#include <math.h>

int main() {
    float r; 
    int n;   
    int t;   
    int p;   
    float amount;

    
    printf("Enter annual interest rate (R in %%): ");
    scanf("%f", &r);

    printf("Enter number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    printf("Enter time in years (t): ");
    scanf("%d", &t);

    printf("Enter principal amount (P): ");
    scanf("%d", &p);

    r = r / 100.0;

    
    amount = p * pow((1 + r / n), n * t);

 
    printf("\nThe formula for compound interest is: A = P(1 + r/n)^(nt)\n");
    printf("Total Amount (A) = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", amount - p);

    return 0;
}
