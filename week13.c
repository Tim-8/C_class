#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fout;
  fout = fopen("output.txt", "w");
  if(fout == NULL){
    printf("Cannnot open the file\n");
    exit(1);
  }

  fprintf(fout, "Hello, world\n");
  fclose(fout);
  return 0;

}