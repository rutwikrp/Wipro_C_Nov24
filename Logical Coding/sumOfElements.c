#include <stdio.h>

int sumArray(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}
int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum of array elements: %d\n", sumArray(arr, size));
}