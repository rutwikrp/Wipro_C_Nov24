#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int i, j, k;

    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size; j++) {
            if (arr[i] == arr[j]) {
                
                arr[j]=0;
                j--;       
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
