#include <stdio.h>

void printFibonacci(int n);
int main() {
    int n;
    printf("Enter the number of Fibonacci numbers you want to print: ");
    scanf("%d", &n);
    
    printFibonacci(n);
    return 0;
}

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    // Special case for n == 1
    if (n >= 1) {
        printf("%d ", first);
    }

    // Special case for n == 2
    if (n >= 2) {
        printf("%d ", second);
    }

    // Generate Fibonacci sequence for n > 2
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}
