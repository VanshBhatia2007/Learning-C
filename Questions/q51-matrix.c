// Write a program to perform matrix addition, (i) matrix multiplication, and 
// (ii) Matrix transpose) on 2D arrays.
#include <stdio.h>
#define MAX_SIZE 10
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void multiplyMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for(int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}
int main() {
    int choice;
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    printf("Matrix Operations:\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Transpose\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter rows and columns for matrices: ");
            scanf("%d %d", &rowsA, &colsA);
            printf("Input first matrix:\n");
            inputMatrix(a, rowsA, colsA);
            printf("Input second matrix:\n");
            inputMatrix(b, rowsA, colsA);
            addMatrices(a, b, result, rowsA, colsA);
            printf("Resultant Matrix after Addition:\n");
            displayMatrix(result, rowsA, colsA);
            break;
        case 2:
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &rowsA, &colsA);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &rowsB, &colsB);
            if(colsA != rowsB) {
                printf("Error: Incompatible matrix dimensions for multiplication.\n");
                return 1;
            }
            printf("Input first matrix:\n");
            inputMatrix(a, rowsA, colsA);
            printf("Input second matrix:\n");
            inputMatrix(b, rowsB, colsB);
            multiplyMatrices(a, b, result, rowsA, colsA, colsB);
            printf("Resultant Matrix after Multiplication:\n");
            displayMatrix(result, rowsA, colsB);
            break;
        case 3:
            printf("Enter rows and columns for the matrix: ");
            scanf("%d %d", &rowsA, &colsA);
            printf("Input the matrix:\n");
            inputMatrix(a, rowsA, colsA);
            transposeMatrix(a, result, rowsA, colsA);
            printf("Transposed Matrix:\n");
            displayMatrix(result, colsA, rowsA);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}