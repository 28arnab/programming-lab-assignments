#include <stdio.h>

int main() {
    int num, temp, sum, digit;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        temp = num; // Temporary variable to store the number
        sum = 0;

        // Calculate the sum of the cubes of the digits
        while (temp > 0) {
            digit = temp % 10;         // Extract the last digit
            sum += digit * digit * digit;     // Add the cube of the digit
            temp /= 10;               // Remove the last digit
        }

        // Check if the number is equal to the sum of the cubes of its digits
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

