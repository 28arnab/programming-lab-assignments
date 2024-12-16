/*Nth Fibonacci Series using Recursion in C*/

#include <stdio.h>

void printFibonacci(int n);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printFibonacci(num);
  return 0;
}

// Calulates fibonacci number
int fibonacci(int n)
{
  if (n == 0)
  {
    return n;
  }
  else if (n == 1)
  {
    return n;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// Function to print the first n Fibonacci numbers
void printFibonacci(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
}