/*C Program to Find the Factorial of a Number using Recursion.*/

#include <stdio.h>

int fac(int x);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num <= 0)
  {
    printf("Enter a positive number and Non zero number");
  }
  printf("%d\n", fac(num));
  return 0;
}

int fac(int x)
{
  if (x > 1)
  {
    return x * fac(x - 1);
  }
  else
  {
    return x;
  }
}