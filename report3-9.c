#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
int simple_asc_ones = 0;
int simple_asc_tens = 0;
char asc[100];
FILE *fin; // 読み込み
FILE *fout; // 書き込み
void change_asc_to_buraille(char asc, FILE *fout);// アスキーコードを点字に変換する関数

int main(void)
{
  /*入力ファイルを開く*/
  if((fin = fopen("input_report3.txt", "r")) == NULL)
  {
    printf("Cannot open the file.\n");
    exit(1); 
  }
  /*出力ファイルを開く*/
  if((fout = fopen("output_report3.txt", "w")) == NULL)
  {
    printf("Cannot open the file.\n");
    exit(1); 
  } 
  /*出力ファイルに文字列を表示*/
  while(fscanf(fin, "%s", asc) != EOF)
  {
    fprintf(fout, "word = %s\n", asc);
  }

  /*[追加課題]アルファベットの小文字以外が入力されたら、errorと表示させる*/
  for(int i=0;i<=strlen(asc);i++)
  {
    printf("%d\n", asc[i]);
    if((asc[i]<97||asc[i]>122)&&(asc[i]!=0))
    {
      printf("error\n");
      exit(1);
    }
  }  
  
  for(int i=0;i<=strlen(asc);i++)
  {
    change_asc_to_buraille(asc[i], fout);
  }

  fclose(fout); 
  fclose(fin);
  return 0; 
}

void change_asc_to_buraille(char asc, FILE *fout)
{
  simple_asc_ones = (asc - 97) % 10;
  simple_asc_tens = ((asc - 97) / 10) % 10;

  if(simple_asc_ones == 0){
    fprintf(fout, "*.\n..\n");
  }else if(simple_asc_ones==1){
    fprintf(fout,"*.\n*.\n");//b
  }else if(simple_asc_ones==2){
    if(simple_asc_tens==2)
      fprintf(fout, ".*\n**\n");
    else
      fprintf(fout,"**\n..\n");//c
  }else if(simple_asc_ones==3){
    if(simple_asc_tens==2)
      fprintf(fout, "**\n..\n");
    else 
      fprintf(fout,"**\n.*\n");//d
  }else if(simple_asc_ones==4){
    if(simple_asc_tens==2)
      fprintf(fout, "**\n.*\n");
    else
      fprintf(fout,"*.\n.*\n");//e
  }else if(simple_asc_ones==5){
    if(simple_asc_tens==2)
      fprintf(fout, "*.\n.*\n");
    else
      fprintf(fout,"**\n*.\n");//f
  }else if(simple_asc_ones==6){
    fprintf(fout,"**\n**\n");//g
  }else if(simple_asc_ones==7){
    fprintf(fout,"*.\n**\n");//h
  }else if(simple_asc_ones==8){
    fprintf(fout,".*\n*.\n");//i
  }else if(simple_asc_ones==9){
    fprintf(fout,".*\n**\n");//j
  }

  if(simple_asc_tens == 0){
    fprintf(fout, "..\n\n");
  }else if(simple_asc_tens == 1){
    fprintf(fout, "*.\n\n");
  }else if(simple_asc_tens==2){
    if(simple_asc_ones==2)
      fprintf(fout, ".*\n\n");
    else
      fprintf(fout, "**\n\n");
  }
}

