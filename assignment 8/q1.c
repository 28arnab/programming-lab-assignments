/*Write a program in C to find the square and cube of any number using
 * thefunction.*/
#include <stdio.h>

// initializing functions
int sqrtt(int x);
int cube(int y);

int main() {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Square is %d, Cube is %d\n", sqrtt(num), cube(num));
  return 0;
}

int sqrtt(int x) {
  int sqrts = 0;
  sqrts = x * x;
  return sqrts;
}

int cube(int y) {
  int cubes = 0;
  cubes = y * y * y;
  return cubes;
}
