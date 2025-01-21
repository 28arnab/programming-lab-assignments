/*Read an existing input file "Input2.txt" and display the count of the
 * number
of words and characters in the file. Assume that the input file
 * contains strings
& characters only. */

#include <stdio.h>

int main() {
  FILE *rf;
  rf = fopen("input_2.txt", "r");
  if (rf == NULL) {
    printf("Error opening input file\n");
    return 1;
  }

  int words = 0, characters = 0;
  char c;
  int insideWord = 0;

  while ((c = fgetc(rf)) != EOF) {
    characters++;

    if (c == ' ' || c == '\n' || c == '\t') {
      if (insideWord) {
        words++;
        insideWord = 0;
      }
    } else {
      insideWord = 1;
    }
  }

  if (insideWord) {
    words++;
  }

  fclose(rf);

  printf("No of words: %d\nNo of characters: %d\n", words, characters);
  return 0;
}
