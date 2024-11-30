#include<stdio.h>


void readMatrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("Enter elements of %s (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("%s:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumOfMatrix(int row, int col, int matrix1[row][col], int matrix2[row][col],int result[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    readMatrix(rows, cols, matrix1, "Matrix 1");
    readMatrix(rows, cols, matrix2, "Matrix 2");

    addMatrices(rows, cols, matrix1, matrix2, result);

    printf("\n");
    printMatrix(rows, cols, matrix1, "Matrix 1");
    printMatrix(rows, cols, matrix2, "Matrix 2");
    printMatrix(rows, cols, result, "Sum Matrix");

    return 0;
}