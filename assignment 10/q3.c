/*Given an existing input file "Input3.txt", display the first 2 sentences
 conatined in the file. Assume that the input file contains more than 2
 sentences, all the sentences ending with a fullstop '.' */

#include <stdio.h>

int main() {
  FILE *rf;
  rf = fopen("input_3.txt", "r");
  if (rf == NULL) {
    printf("Error opening input file\n");
    return 1;
  }
  char c;
  int sentence = 0;
  while ((c = fgetc(rf)) != EOF) {
    if (c == '.') {
      sentence++;
    }
    if (sentence < 2) {
      putchar(c);
    }
    if (sentence == 2 && c == '.') {
      printf(".\n");
    }
  }
  return 0;
}
