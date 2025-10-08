#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    int pair1 = -1, pair2 = -1;
    int minDiff = 1000000; 
    int bestSum = 0;

  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            int diff = abs(sum - k);  

            if (diff < minDiff) {
                minDiff = diff;
                bestSum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("Pair (%d, %d) has sum %d which is closest to %d (distance = %d)\n",
           pair1, pair2, bestSum, k, minDiff);

    return 0;
}
