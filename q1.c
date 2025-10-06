
#include <stdio.h>
#include <limits.h>  // for INT_MAX and INT_MIN

int main() {
    int n, i;
    scanf("%d", &n);   // size of array
    int a[n];
    
    // input array
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (i = 0; i < n; i++) {
        // for largest and second largest
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }

        // for smallest and second smallest
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
    }

    printf("Largest: %d, Second Largest: %d\n", max1, max2);
    printf("Smallest: %d, Second Smallest: %d\n", min1, min2);

    return 0;
}