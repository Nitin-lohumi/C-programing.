#include <stdio.h>

int main() {
    int arr[] = {8, 4, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons = 0, shifts = 0;

    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            shifts++;
            j--;
        }
        comparisons++;
        arr[j + 1] = key;
        if (j + 1 != i) {
            shifts++;
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Print the number of comparisons and shifts
    printf("Number of comparisons: %d\n", comparisons);
    printf("Number of shifts: %d\n", shifts);

    return 0;
}
