/*C Program to Find GCD and LCM of Two Numbers using Recursion*/

#include <stdio.h>

int GCD(int x, int y);
int LCM(int x, int y);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = GCD(num1, num2);
    int lcm = LCM(num1, num2);

    printf("GCD: %d, LCM: %d\n", gcd, lcm);

    return 0;
}

// Function to calculate GCD using recursion
int GCD(int x, int y) {
    if (y == 0)
        return x;
    return GCD(y, x % y);
}

// Function to calculate LCM
int LCM(int x, int y) {
    return (x * y) / GCD(x, y);
}