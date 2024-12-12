// Write a program in C to add two numbers using pointers.
#include <stdio.h>

int main() {
  int num_1, num_2;
  int *num1 = &num_1;
  int *num2 = &num_2;
  printf("Enter the first number: ");
  scanf("%d", num1);
  printf("Enter the second number: ");
  scanf("%d", num2);
  int sum = *num1 + *num2;
  printf("Sum of the numbers: %d\n", sum);
  return 0;
}
