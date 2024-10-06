#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
int partition(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(char arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void displaySorted(char arr[], int size) {
    printf("Sorted sequence of characters: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char sequence[100];
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Enter sequence of characters\n");
        printf("2. Sort using Quick Sort\n");
        printf("3. Display sorted sequence\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter sequence of characters: ");
                scanf("%s", sequence);
                break;
            case 2:
                quickSort(sequence, 0, strlen(sequence) - 1);
                printf("Sequence sorted successfully.\n");
                break;
            case 3:
                displaySorted(sequence, strlen(sequence));
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
