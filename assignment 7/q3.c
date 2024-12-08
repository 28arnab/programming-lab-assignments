//Write a program in C to sort an array using a pointer.
#include <stdio.h>

void sort(int *x, int size_of_array);

int main() {
    int size_of_array;
    printf("Enter number of numbers you want to sort: ");
    scanf("%d", &size_of_array);

    if (size_of_array < 2) {
        printf("To sort, you need more than one number.\n");
        return 1;
    }

    int number[size_of_array];
    for (int i = 0; i < size_of_array; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    // Print the original array
    printf("\nNumbers in the array before sorting:\n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    sort(number, size_of_array);

    // Print the sorted array
    printf("\nNumbers in the array after sorting:\n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}

void sort(int *x, int size_of_array) {
    for (int i = 0; i < size_of_array - 1; i++) {
        for (int j = i + 1; j < size_of_array; j++) {
            if (*(x + i) > *(x + j)) {
                int temp = *(x + i);
                *(x + i) = *(x + j);
                *(x + j) = temp;
            }
        }
    }
}

