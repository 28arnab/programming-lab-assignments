//Write a C Program to Find the Sum of Each Row and Column of a MxN Matrix.
#include <stdio.h>
int main() {
    int size;
    printf("Enter size of the matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > 3) {
        printf("Invalid size: %d. Only sizes 1, 2, or 3 are supported.\n", size);
        return 1;
    }

    int matrix[size][size];

    // Input matrix elements
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element %d %d for matrix 1: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Row and column sums
    int rowSum[size], colSum[size];
    for (int i = 0; i < size; i++) {
        rowSum[i] = 0;
        colSum[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Row sums: ");
    for (int i = 0; i < size; i++) {
        printf("r%d = %d ", i + 1, rowSum[i]);
    }
    printf("\n");

    // Print column sums
    printf("Column sums: ");
    for (int i = 0; i < size; i++) {
        printf("c%d = %d ", i + 1, colSum[i]);
    }
    printf("\n");

    return 0;
}
