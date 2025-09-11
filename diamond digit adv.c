#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

  
    for (int i = 1; i <= n; i++) {
        
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        // print 1..i twice
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

 
    for (int i = n - 1; i >= 1; i--) {
      
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        // print 1..i twice
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
