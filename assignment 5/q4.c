//Write a C Program to Display Lower and Upper Triangular Matrix.
#include <stdio.h>
int main()
{
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
	printf("Upper Triangular Matrix:\n");
	    for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
		    if (i > j) {
			printf("0 ");
		    } else {
			printf("%d ", matrix[i][j]);
		    }
		}
		printf("\n");
	    }
	    printf("\n");


	printf("Lower Triangular Matrix:\n");
	    for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
		    if (i < j) {
			printf("0 ");
		    } else {
			printf("%d ", matrix[i][j]);
		    }
		}
		printf("\n");
	    }
	    printf("\n");
	
	return 0;
}
