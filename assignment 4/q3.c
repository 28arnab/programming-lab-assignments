#include<stdio.h>

int main()
{
    int i;
    printf("Number of elements in the array: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int num[i];
    int max, min;

    for(int j = 0; j < i; j++) {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &num[j]);

        if (j == 0) {
            max = min = num[j];
        } else {
            if (num[j] > max) max = num[j];
            if (num[j] < min) min = num[j];
        }
    }

    printf("Max: %d Min: %d\n", max, min);
    return 0;
}
