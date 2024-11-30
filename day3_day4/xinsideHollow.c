#include <stdio.h>

int main() {
    int n;

    // Input the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Print the square with an X
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' for the boundaries or the X
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || j == n - i - 1) {
                printf("*");
            } else {
                printf(" "); // Print space for hollow part
            }
        }
        printf("\n");
    }

    return 0;
}
