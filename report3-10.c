#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
int simple_asc_ones = 0;
int simple_asc_tens = 0;
char asc[100];
FILE *fin; // 読み込み
FILE *fout; // 書き込み
void change_asc_to_buraille(char asc, FILE *fout);//アスキーコードを点字に変換する関数


void change_asc_to_buraille(char asc, FILE *fout)//アスキーコードを点字に変換する関数
{
  simple_asc_ones = (asc - 97) % 10;//それぞれのアスキーコードから97を引いた数の1の位
  simple_asc_tens = ((asc - 97) / 10) % 10;//それぞれのアスキーコードから97を引いた数の10の位

  /*点字の上４つの点を決定*/
  if(simple_asc_ones == 0){
    fprintf(fout, "*.\n..\n");//a,k,u
  }else if(simple_asc_ones==1){
    fprintf(fout,"*.\n*.\n");//b,l,v
  }else if(simple_asc_ones==2){
    if(simple_asc_tens==2)
      fprintf(fout, ".*\n**\n");//w
    else
      fprintf(fout,"**\n..\n");//c,m
  }else if(simple_asc_ones==3){
    if(simple_asc_tens==2)
      fprintf(fout, "**\n..\n");//x
    else 
      fprintf(fout,"**\n.*\n");//d,n
  }else if(simple_asc_ones==4){
    if(simple_asc_tens==2)
      fprintf(fout, "**\n.*\n");//y
    else
      fprintf(fout,"*.\n.*\n");//e,o
  }else if(simple_asc_ones==5){
    if(simple_asc_tens==2)
      fprintf(fout, "*.\n.*\n");//z
    else
      fprintf(fout,"**\n*.\n");//f,p
  }else if(simple_asc_ones==6){
    fprintf(fout,"**\n**\n");//g,q
  }else if(simple_asc_ones==7){
    fprintf(fout,"*.\n**\n");//h,r
  }else if(simple_asc_ones==8){
    fprintf(fout,".*\n*.\n");//i,s
  }else if(simple_asc_ones==9){
    fprintf(fout,".*\n**\n");//j,t
  }

  /*点字の下２つの点を決定*/
  if(simple_asc_tens == 0){
    fprintf(fout, "..\n\n");//a-j
  }else if(simple_asc_tens == 1){
    fprintf(fout, "*.\n\n");//k-t
  }else if(simple_asc_tens==2){
    if(simple_asc_ones==2)
      fprintf(fout, ".*\n\n");//w
    else
      fprintf(fout, "**\n\n");//u,v,x,y,z
  }
}

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
  /*出力ファイルに入力ファイルの文字列を表示*/
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
      fprintf(fout, "error");
      exit(1);
    }
  }  
  /*アスキーコードを点字に変換する関数を文字数分だけ回す*/
  for(int i=0;i<=strlen(asc);i++)
  {
    change_asc_to_buraille(asc[i], fout);
  }

  fclose(fout); 
  fclose(fin);
  return 0; 
}