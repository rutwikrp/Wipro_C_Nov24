#include <stdio.h>

void convertArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            
            arr[i] -= 1;
        } else {
            
            arr[i] += 1;
        }
    }
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

    convertArray(arr, size);

    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
