#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  // Return index if target is found
    }
    return -1;  // Return -1 if target is not found
}

// Function to print the result
void printResult(int index) {
    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);
}

int main() {
    int arr[] = {2, 4, 0, 1, 9, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = linearSearch(arr, size, target);
    printResult(index);

    return 0;
}
