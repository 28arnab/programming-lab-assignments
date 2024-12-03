// Write a C Program to Find Determinant and Transpose of a Matrix.
#include <stdio.h>

int main()
{
        int size;
	printf("Enter size of the matrix: ");
	scanf("%d", &size);
	int matrix[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("Enter element %d %d for matrix 1:",i+1, j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
        if (size <= 0) {
                printf("Enter a valid size greater then zero !\n");
        }
        if (size == 1) {
                printf("Determinant of the matrix is: ");
                printf("%d\n",matrix[0][0]);
        }
        if (size == 2) {
                printf("Determinant of the matrix is: ");
                printf("%d\n",matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1]);
        }
        if (size == 3) {
                printf("Determinant of the matrix is: ");
                printf("%d\n",matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-
                matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]));
        }
        for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                }
        }
        printf("Transpose of matrix is:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]);
		}
	printf("\n");
	}
    return 0;
}
