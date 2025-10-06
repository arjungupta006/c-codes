#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int max = a[0][0], min = a[0][0];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j];
        }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
