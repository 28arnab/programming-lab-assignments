/*Write a program in C to swap elements using call by reference.*/
#include <stdio.h>

void swap(int *x, int *y);
int main()
{
	int num_1, num_2, *num1 = &num_1, *num2 = &num_2;
	printf("Enter the first number: ");
	scanf("%d", num1);
	printf("Enter the second number: ");
	scanf("%d", num2);
	printf("Before swapping: first number:%d, second number:%d\n", *num1, *num2);
	swap(num1, num2);
	printf("After swapping: first number:%d, second number:%d\n", *num1, *num2);
	return 0;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
