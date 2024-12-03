#include<stdio.h>

int main()
{
    int i;
    printf("Number of elements in the array: ");
    scanf("%d",&i);
    int num[i] , sum = 0;
    for(int j = 0 ; j < i; j++)
    {
        printf("Enter element %d:  ", j);
        scanf("%d", &num[j]);
        sum += num[j];
    }
    printf("Sum of the elements in the array: %d\n", sum);
    return 0;
}
