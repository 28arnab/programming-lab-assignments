//Write a program in C to print all permutations of a given string using pointers.
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b);
void permute(char *str, int left, int right);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}
// Function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Function to generate permutations
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i)); // Swap characters
            permute(str, left + 1, right); // Recurse with the next position fixed
            swap((str + left), (str + i)); // Backtrack to original configuration
        }
    }
}
