#include<stdio.h>
int main()
{
    int i;
    printf("Number of elements in the array: ");
    scanf("%d", &i);
    if (i <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    int num[i],even[i],odd[i];
    int even_index = 0 , odd_index = 0;
    for(int j = 0; j < i; j++) 
    {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &num[j]);
    }
    for (int j = 0; j < i; j++) 
    {
        if (num[j]%2 == 0) 
        {
                even[even_index++] = num[j];
        }
        else
        {
                odd[odd_index++] = num[j];
        }
    }
    if (even_index > 0) {
    printf("Even Numbers: ");
    for (int j = 0; j < even_index; j++) {
        printf("%d ", even[j]);
    }
    printf("\n");
} else {
    printf("No even numbers\n");
}

if (odd_index > 0) {
    printf("Odd Numbers: ");
    for (int j = 0; j < odd_index; j++) {
        printf("%d ", odd[j]);
    }
    printf("\n");
} else
{
    printf("No odd numbers\n");
}    return 0;
}
