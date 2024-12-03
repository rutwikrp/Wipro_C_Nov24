#include "linearsearch.h"


int linearSearch(int arr[], int size, int numtoSearch) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == numtoSearch) {
            return i;  
        }
    }
    return -1;  
}
