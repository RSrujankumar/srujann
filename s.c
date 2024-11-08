#include <stdio.h>

#define MAX 10  // Maximum size for the matrices

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j); 
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Resulting Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Input for first matrix:\n");
    inputMatrix(first, rows, cols);

    printf("Input for second matrix:\n");
    inputMatrix(second, rows, cols);

    addMatrices(first, second, result, rows, cols);

    printMatrix(result, rows, cols);

    return 0;
}



































































