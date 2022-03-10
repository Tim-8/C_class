#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fout;

  if((fout=fopen("output_report3.txt","w"))==NULL){
      printf("Cannot open the file\n");
      exit(1);
  }


//ファイルへの書き出し fprintf(fout, "Hello, world\n");
//ファイルのクローズ fclose(fout);
  return 0; 
}
