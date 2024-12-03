#include <stdio.h>
#include "linearsearch.h" 
#include "linearSearch.c"



int main() {
    int size, numtoSearch, result;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &numtoSearch);

    result = linearSearch(arr, size, numtoSearch);

    
    if (result == -1) {
        printf("Element %d not found in the array.\n", numtoSearch);
    } else {
        printf("Element %d found at index %d.\n", numtoSearch, result);
    }

    return 0;
}
