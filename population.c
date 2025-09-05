#include <stdio.h>

int main() {
    int a;
    int population;
    printf("Enter the current population of the town: ");
    scanf("%d", &population);
    for (a = 1; a <= 10; a++) {
        population = population + (population * 0.1);
    }
    printf("The population after 10 years will be: %d\n", population);
    
  
    return 0;
}
