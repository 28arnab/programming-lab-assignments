#include <stdio.h>

long long factorial(int num);
    int main() {
    int n;
    long long sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of factorials
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    // Output the result
    printf("Sum of the series is: %lld\n", sum);

    return 0;
}
// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

