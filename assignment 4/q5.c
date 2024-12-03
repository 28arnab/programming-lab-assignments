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

    int num[i], temp[i]; // tempIndex tracks the number of duplicates found

    // Input elements
    for (int j = 0; j < i; j++) {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &num[j]);
    }
    int PosDel;
    printf("Position of the element you want to delete: ");
    scanf("%d",&PosDel);
    for (int j = PosDel; j < i-1; j++) {
        num[j] = num[j+1];
    }
    printf("Elements in the array:");
    for (int j = 0; j < i - 1 ; j++) {
    printf(" %d",num[j]);
    }
    printf("\n");
    return 0;
}
