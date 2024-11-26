#include <stdio.h>

void findMinAndMax(double arr[], int size, double *min, double *max) {
    
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array (N): ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    double arr[size];
    
    printf("Enter %d elements of type double:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

    double min, max;

    findMinAndMax(arr, size, &min, &max);

    printf("Smallest element: %.2f\n", min);
    printf("Largest element: %.2f\n", max);

    return 0;
}
