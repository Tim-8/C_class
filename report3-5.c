#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fin; // 読み込み用 
FILE *fout; // 書き込み用 
//int data;
int i = 0;
int j = 0;
int k = 0;
char moji[100];
char str[100];

void Buraille(char str, FILE *fout);

int main(void)
{
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
        //while(str[i])
        //printf("data = %d\n", moji[i++]);
        //fprintf(fout, "%d\n", str[i++]);
        fprintf(fout, "word = %s\n", str);
      }

  for(int k=0;k<=strlen(str);k++){
    Buraille(str[k], fout);
  }
  //Buraille();

  // ファイルのクローズ 
  fclose(fout); 
  fclose(fin);
  return 0; 
}

void Buraille(char str, FILE *fout){
  if(str==97){
    fprintf(fout,"*.\n..\n..\n\n");//a
  }else if(str==98){
    fprintf(fout,"*.\n*.\n..\n\n");//b
  }else if(str==99){
    fprintf(fout,"**\n*.\n..\n\n");//c
  }else if(str==100){
    fprintf(fout,"**\n.*\n..\n\n");//d
  }else if(str==101){
    fprintf(fout,"*.\n.*\n..\n\n");//e
  }else if(str==102){
    fprintf(fout,"**\n*.\n..\n\n");//f
  }else if(str==103){
    fprintf(fout,"**\n**\n..\n\n");//g
  }else if(str==104){
    fprintf(fout,"*.\n**\n..\n\n");//h
  }else if(str==105){
    fprintf(fout,".*\n*.\n..\n\n");//i
  }else if(str==106){
    fprintf(fout,".*\n**\n..\n\n");//j
  }else if(str==107){
    fprintf(fout,"*.\n..\n*.\n\n");//k
  }else if(str==108){
    fprintf(fout,"*.\n*.\n*.\n\n");//l
  }else if(str==109){
    fprintf(fout,"**\n..\n*.\n\n");//m
  }else if(str==110){
    fprintf(fout,"**\n*.\n*.\n\n");//n
  }else if(str==111){
    fprintf(fout,"*.\n.*\n*.\n\n");//o
  }else if(str==112){
    fprintf(fout,"**\n*.\n*.\n\n");//p
  }else if(str==113){
    fprintf(fout,"**\n**\n*.\n\n");//q
  }else if(str==114){
    fprintf(fout,"*.\n**\n*.\n\n");//r
  }else if(str==115){
    fprintf(fout,".*\n*.\n*.\n\n");//s
  }else if(str==116){
    fprintf(fout,".*\n**\n*.\n\n");//t
  }else if(str==117){
    fprintf(fout,"*.\n..\n**\n\n");//u
  }else if(str==118){
    fprintf(fout,"*.\n*.\n**\n\n");//v
  }else if(str==119){
    fprintf(fout,".*\n**\n.*\n\n");//w
  }else if(str==120){
    fprintf(fout,"**\n..\n**\n\n");//x
  }else if(str==121){
    fprintf(fout,"**\n*.\n**\n\n");//y
  }else if(str==122){
    fprintf(fout,"*.\n.*\n**\n\n");//z
  }
}