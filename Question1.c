#include <stdio.h>

void findDuplicates(int arr[], int n) {
    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 7, 3, 2, 8, 4, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
