//Write a c program to Perform Matrix Multiplication.
#include <stdio.h>

int main() {
	int size;
	printf("Enter size of the matrix: ");
	scanf("%d", &size);
	int matrix1[size][size], matrix2[size][size], multi[size][size];
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
            		multi[i][j] = 0;
        	}
    	}
	for (int i = 0; i < size; i++) { 
		for (int j = 0; j < size; j++) {
            		for (int k = 0; k < size; k++) {
				multi[i][j] += matrix1[i][k] * matrix2[k][j];

            		}
        	}
    	}
	printf("Matrix after multiplication:\n");
	for (int i = 0; i < size; i++) {
        	for (int j = 0; j < size; j++) {
			printf("%d ", multi[i][j]);
        	}
        	printf("\n");
    	}
	return 0;
}
