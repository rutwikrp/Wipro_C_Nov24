#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Input dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &m1, &n1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &m2, &n2);

    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication not possible (columns of first != rows of second).\n");
        return 1;
    }

    int A[m1][n1], B[m2][n2], Product[m1][n2];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            Product[i][j] = 0;
        }
    }

    // Calculate product
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display product matrix
    printf("Product of the two matrices:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", Product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
