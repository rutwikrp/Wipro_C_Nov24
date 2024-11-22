#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}


void reverse(char* arr, int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}


void findNextBiggerNumber(char* number) {
    int n = strlen(number);
    int i, j;

    
    for (i = n - 2; i >= 0; i--) {
        if (number[i] < number[i + 1]) {
            break;
        }
    }

    
    if (i < 0) {
        printf("Next bigger number is not possible.\n");
        return;
    }

    
    for (j = n - 1; j > i; j--) {
        if (number[j] > number[i]) {
            break;
        }
    }

    
    swap(&number[i], &number[j]);

    
    reverse(number, i + 1, n - 1);

    printf("Next bigger number: %s\n", number);
}

int main() {
    char number[20];

    
    printf("Enter a number: ");
    scanf("%s", number);

    findNextBiggerNumber(number);

    return 0;
}
