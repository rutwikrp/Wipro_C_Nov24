#include <stdio.h>

int main() {
    int m, n;

    // Input matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], Transpose[n][m];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Transpose[j][i] = A[i][j];
        }
    }

    // Display transpose matrix
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
