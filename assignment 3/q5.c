#include <stdio.h>

int main() {
    int num, reverse = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        reverse = reverse * 10 + num % 10;  // Extract last digit and append to reverse
        num = num / 10;  // Remove the last digit from num
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
