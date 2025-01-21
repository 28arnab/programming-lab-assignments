/*Read an existing input file "Input1.txt" and write its contents in another
 * file "Output.txt" (you should create this new file and then write in this
 * file). Assume that the input file contains strings & characters only. */

#include <stdio.h>

int main() {
  FILE *rf;
  FILE *wf;

  rf = fopen("input_1.txt", "r");
  if (rf == NULL) {
    printf("Error opening input file\n");
    return 1;
  }

  wf = fopen("output_1.txt", "w");
  if (wf == NULL) {
    printf("Error creating output file\n");
    fclose(rf);
    return 1;
  }

  char c;
  while ((c = fgetc(rf)) != EOF) {
    fputc(c, wf);
  }

  fclose(rf);
  fclose(wf);

  return 0;
}
