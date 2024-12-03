#include<stdio.h>

int main()
{
    int i;
    printf("Number of elements in the array: ");
    scanf("%d", &i);
    if (i <= 1) 
    {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int num[i], min, second_min;

    for (int j = 0; j < i; j++)
    {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &num[j]);
        if (num[j] >= 9999) 
        {
            printf("Number should be less than 9999\n");
            return 1;
        }
    }

    // Initialize the smallest and second smallest
    if (num[0] < num[1]) 
    {
        min = num[0];
        second_min = num[1];
    } 
    else 
    {
        min = num[1];
        second_min = num[0];
    }

    // Iterate through the rest of the array
    for (int j = 2; j < i; j++) 
    {
        if (num[j] < min) 
        {
            second_min = min;
            min = num[j];
        } 
        else if (num[j] < second_min && num[j] != min) 
        {
            second_min = num[j];
        }
    }

    if (min == second_min) 
    {
        printf("No distinct second smallest element found.\n");
    } 
    else 
    {
        printf("Second smallest: %d\n", second_min);
    }

    return 0;
}
