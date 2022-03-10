#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
int simple_asc = 0;
char asc[100];
FILE *fin; // 読み込み用 
FILE *fout; // 書き込み用 

void Buraille(char asc, FILE *fout);

int main(void)
{
  // 読み込みモードでファイルをオ
  if((fin = fopen("input_report3.txt", "r")) == NULL){
    printf("Cannot open the file.\n");
    exit(1); 
  }
  // 書き込みモードでファイルをオープン
  if((fout = fopen("output_report3.txt", "w")) == NULL){
    printf("Cannot open the file.\n");
    exit(1); 
  }
  // ファイルの最後まで繰り返し読み込み 
  while(fscanf(fin, "%s", asc) != EOF){
        fprintf(fout, "word = %s\n", asc);
      }

  for(int i=0;i<=strlen(asc);i++){
    Buraille(asc[i], fout);
  }
  // ファイルのクローズ 
  fclose(fout); 
  fclose(fin);
  return 0; 
}

void Buraille(char asc, FILE *fout){
  simple_asc = asc -97;
  if(simple_asc==0){
    fprintf(fout,"*.\n..\n..\n\n");//a
  }else if(simple_asc==1){
    fprintf(fout,"*.\n*.\n..\n\n");//b
  }else if(asc==99){
    fprintf(fout,"**\n*.\n..\n\n");//c
  }else if(asc==100){
    fprintf(fout,"**\n.*\n..\n\n");//d
  }else if(asc==101){
    fprintf(fout,"*.\n.*\n..\n\n");//e
  }else if(asc==102){
    fprintf(fout,"**\n*.\n..\n\n");//f
  }else if(asc==103){
    fprintf(fout,"**\n**\n..\n\n");//g
    fprintf(fout,"*.\n**\n..\n\n");//h
  }else if(asc==105){
    fprintf(fout,".*\n*.\n..\n\n");//i
  }else if(asc==106){
    fprintf(fout,".*\n**\n..\n\n");//j
  }else if(asc==107){
    fprintf(fout,"*.\n..\n*.\n\n");//k
  }else if(asc==108){
    fprintf(fout,"*.\n*.\n*.\n\n");//l
  }else if(asc==109){
    fprintf(fout,"**\n..\n*.\n\n");//m
  }else if(asc==110){
    fprintf(fout,"**\n*.\n*.\n\n");//n
  }else if(asc==111){
    fprintf(fout,"*.\n.*\n*.\n\n");//o
  }else if(asc==112){
    fprintf(fout,"**\n*.\n*.\n\n");//p
  }else if(asc==113){
    fprintf(fout,"**\n**\n*.\n\n");//q
  }else if(asc==114){
    fprintf(fout,"*.\n**\n*.\n\n");//r
  }else if(asc==115){
    fprintf(fout,".*\n*.\n*.\n\n");//s
  }else if(asc==116){
    fprintf(fout,".*\n**\n*.\n\n");//t
  }else if(asc==117){
    fprintf(fout,"*.\n..\n**\n\n");//u
  }else if(asc==118){
    fprintf(fout,"*.\n*.\n**\n\n");//v
  }else if(asc==119){
    fprintf(fout,".*\n**\n.*\n\n");//w
  }else if(asc==120){
    fprintf(fout,"**\n..\n**\n\n");//x
  }else if(asc==121){
    fprintf(fout,"**\n*.\n**\n\n");//y
  }else if(asc==122){
    fprintf(fout,"*.\n.*\n**\n\n");//z
  }
}