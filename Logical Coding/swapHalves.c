#include <stdio.h>

void swapHalves(int arr[], int size) {
    int mid = size / 2;
    for (int i = 0; i < mid; i++) {
        int temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    swapHalves(arr, size);

    printf("Array after swapping halves: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
