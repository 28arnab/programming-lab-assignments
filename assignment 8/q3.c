/* Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5
 * using the function.*/

#include <stdio.h>

int series(int x);
int fac(int y);
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int answer = series(num);
  printf("The sum of the series %d\n", answer);
  return 0;
}

int fac(int y) {
  int sum = 1;
  for (int z = 1; z <= y; z++) {
    sum *= z;
  }
  return sum;
}

int series(int x) {
  int total = 0;
  for (int i = 1; i <= x; i++) {
    total += fac(i) / i;
  }
  return total;
}
