
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");    
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Error! column of first matrix must be equal to row of second.\n");
        return 1;
    }
    int first[r1][c1], second[r2][c2], result[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &first[i][j]);
    printf("Enter elements of second matrix:\n");   
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &second[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += first[i][k] * second[k][j];
        }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }    
    return 0;
}
// here k is representing the common dimension while 
// reduce the complexity from 8 to 7
//the algorithm is O(n^3) but we can reduce the constant factor by optimizing the innermost loop
// by using a temporary variable to store the value of first[i][k] and second[k][j] before the multiplication
// this way we avoid multiple memory accesses for the same value
// Updated innermost loop:
