//Write a c program to reverse a string.
#include <stdio.h>
#include <string.h>

int main()
{
	int i, wordLen;
	char temp, word[100];
	printf("Enter the word: ");
	scanf("%[^\n]", word);
	wordLen = strlen(word);
	for (i = 0; i < wordLen/2; i++) {
		temp = word[i];
		word[i] = word[wordLen - i - 1];
		word[wordLen - i - 1] = temp;
	}
		printf("%s\n", word);
	return 0;
}
