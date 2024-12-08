//Write a c program to check how many words present in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
int wordLen, j = 1;
char word[100];
printf("Enter the word: ");
scanf("%[^\n]", word);
wordLen = strlen(word);
	for (int i = 0; i < wordLen; i++) {
		if (isspace(word[i])) {
			j++;
		}
	}
printf("Number of words in the strings is %d\n",j);
	return 0;
}
