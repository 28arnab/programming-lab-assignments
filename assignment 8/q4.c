/*Write a program in C to convert a decimal number to a binary number using the
 * function.*/

#include <stdio.h>

void decTObin(int x);

int main() {
  int num;
  printf("Input any decimal number: ");
  scanf("%d", &num);
  decTObin(num);
  return 0;
}

// Function to convert a decimal number to binary
void decTObin(int x) {
  int binary[32]; // Array to store binary digits
  int i = 0;

  // Handle edge case for zero
  if (x == 0) {
    printf("Binary number: 0\n");
    return;
  }

  // Convert decimal to binary
  while (x > 0) {
    binary[i] = x % 2;
    x /= 2;
    i++;
  }

  printf("Binary number: ");
  // Print binary digits in reverse order
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", binary[j]);
  }
  printf("\n");
}
