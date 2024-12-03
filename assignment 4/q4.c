#include <stdio.h>

int main()
{
    int i;
    printf("Number of elements in the array: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int num[i], temp[i], tempIndex = 0, isDuplicate; // tempIndex tracks the number of duplicates found

    // Input elements
    for (int j = 0; j < i; j++) {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &num[j]);
    }

    // Find duplicates
    for (int j = 0; j < i; j++) {
        isDuplicate = 0;
        for (int k = 0; k < tempIndex; k++) {
            if (temp[k] == num[j]) {
                isDuplicate = 1; // Already added as a duplicate
                break;
            }
        }
        if (!isDuplicate) { // Check for duplicates in the array
            for (int k = j + 1; k < i; k++) {
                if (num[j] == num[k]) {
                    temp[tempIndex++] = num[j];
                    break;
                }
            }
        }
    }

    // Print duplicates
    if (tempIndex == 0) {
        printf("No duplicates found.\n");
    } else {
        printf("Duplicate elements: ");
        for (int j = 0; j < tempIndex; j++) {
            printf("%d ", temp[j]);
        }
        printf("\n");
    }

    return 0;
}
