// Write a C Program to perform Addition, Subtraction and Trace of 2 Matrices
#include <stdio.h>

int main() {
	int size;
	printf("Enter size of the matrix: ");
	scanf("%d", &size);
	int matrix1[size][size], matrix2[size][size], sum[size][size], diff[size][size], trace = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("Enter element %d %d for matrix 1:",i+1, j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("Enter element %d %d for matrix 2:",i+1, j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			sum[i][j] = 0;
			sum[i][j] += matrix1[i][j] + matrix2[i][j];
			diff[i][j] = 0;
			diff[i][j] += matrix1[i][j] - matrix2[i][j];
			if (i == j) {
				trace += matrix1[i][j] + matrix2[i][j];
			}
		}
	}
	printf("Addition of matrix is :\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", sum[i][j]);
		}
	printf("\n");
	}
	printf("Subtraction of matrix is :\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", diff[i][j]);
		}
	printf("\n");
	}
	printf("Trace of matrix is : %d\n",trace);
	return 0;
}
