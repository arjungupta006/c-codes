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

    for(int i = 0; i < r; i++) {
        int max = a[i][0];
        for(int j = 1; j < c; j++)
            if(a[i][j] > max)
                max = a[i][j];
        printf("Leader of row %d = %d\n", i + 1, max);
    }

    for(int j = 0; j < c; j++) {
        int max = a[0][j];
        for(int i = 1; i < r; i++)
            if(a[i][j] > max)
                max = a[i][j];
        printf("Leader of column %d = %d\n", j + 1, max);
    }

    return 0;
}
