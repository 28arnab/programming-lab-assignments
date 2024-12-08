//Write a program in C to check string is palindrome or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
int wordLen, j = 0;
char word[100];
printf("Enter the word: ");
scanf("%[^\n]", word);
wordLen = strlen(word);
	for (int i = 0; i < floor(wordLen/2); i++) {
		if (word[i] != word[wordLen - i - 1]) {
			j++;
		}
	}
if (j == 0) {
	printf("String is a palindrome\n");
}
else {
	printf("String is not a palindrome\n");
}
return 0;
}
