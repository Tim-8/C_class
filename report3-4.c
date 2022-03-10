#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *fin; // 読み込み用 
  FILE *fout; // 書き込み用 
  //int data;
  int i = 0;
  int j = 0;
  int k = 0;
  char moji[100];
  char str[100];
  // 読み込みモードでファイルをオ
  if((fin = fopen("input_report3.txt", "r")) == NULL){
        printf("Cannot open the file.\n");
        exit(1); }
  // 書き込みモードでファイルをオープン
  if((fout = fopen("output_report3.txt", "w")) == NULL){
        printf("Cannot open the file.\n");
        exit(1); }
  for(j=0;j<100;++j){
    moji[j] = str[j];
  }     
  // ファイルの最後まで繰り返し読み込み 
  while(fscanf(fin, "%s", str) != EOF){
        while(str[i])
        printf("data = %d\n", moji[i++]);
        //fprintf(fout, "%d\n", str[i++]);
      }
  

  for(int k=0;k<=strlen(str);k++){
    if(str[k]==97){
    fprintf(fout,"*.\n..\n..\n\n");
  }
  else{
    fprintf(fout,"none\n");
  }
  }

  // ファイルのクローズ 
  fclose(fout); 
  fclose(fin);
  return 0; 
}

/*void Readji(char str, FILE *fout){
  if(str==97){
    fprintf(fout,"OK!");
  }
  else{
    fprintf(fout,"none");
  }
}*/